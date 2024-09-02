#include "EMC2302.h"
#include "TMP1075.h"
#include "TPS53647.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_timer.h"
#include "global_state.h"
#include "math.h"
#include "mining.h"
#include "nvs_config.h"
#include "serial.h"
#include "vcore.h"
#include <string.h>

#include "influx_task.h"

#define POLL_RATE 2000
#define MAX_TEMP 90.0
#define THROTTLE_TEMP 75.0
#define THROTTLE_TEMP_RANGE (MAX_TEMP - THROTTLE_TEMP)

#define VOLTAGE_START_THROTTLE 4900
#define VOLTAGE_MIN_THROTTLE 3500
#define VOLTAGE_RANGE (VOLTAGE_START_THROTTLE - VOLTAGE_MIN_THROTTLE)

static const char *TAG = "power_management";

static float _fbound(float value, float lower_bound, float upper_bound)
{
    if (value < lower_bound)
        return lower_bound;
    if (value > upper_bound)
        return upper_bound;

    return value;
}

// Set the fan speed between 20% min and 100% max based on chip temperature as input.
// The fan speed increases from 20% to 100% proportionally to the temperature increase from 50 and THROTTLE_TEMP
static double automatic_fan_speed(float chip_temp, GlobalState *GLOBAL_STATE)
{
    double result = 0.0;
    double min_temp = 45.0;
    double min_fan_speed = 35.0;

    if (chip_temp < min_temp) {
        result = min_fan_speed;
    } else if (chip_temp >= THROTTLE_TEMP) {
        result = 100;
    } else {
        double temp_range = THROTTLE_TEMP - min_temp;
        double fan_range = 100 - min_fan_speed;
        result = ((chip_temp - min_temp) / temp_range) * fan_range + min_fan_speed;
    }

    float perc = (float) result / 100;
    GLOBAL_STATE->POWER_MANAGEMENT_MODULE.fan_perc = perc;
    switch (GLOBAL_STATE->device_model) {
    case DEVICE_NERDQAXE_PLUS:
        EMC2302_set_fan_speed(perc);
        break;
    default:
    }
    return result;
}

void power_management_turn_on() {
    gpio_set_direction(GPIO_NUM_10, GPIO_MODE_OUTPUT);
    gpio_set_level(GPIO_NUM_10, 1);
}

void power_management_turn_off() {
    gpio_set_direction(GPIO_NUM_10, GPIO_MODE_OUTPUT);
    gpio_set_level(GPIO_NUM_10, 1);
}

void POWER_MANAGEMENT_task(void *pvParameters)
{
    GlobalState *GLOBAL_STATE = (GlobalState *) pvParameters;

    PowerManagementModule *power_management = &GLOBAL_STATE->POWER_MANAGEMENT_MODULE;

    power_management->frequency_multiplier = 1;

    int last_frequency_increase = 0;

    uint16_t frequency_target = nvs_config_get_u16(NVS_CONFIG_ASIC_FREQ, CONFIG_ASIC_FREQUENCY);

    uint16_t auto_fan_speed = nvs_config_get_u16(NVS_CONFIG_AUTO_FAN_SPEED, 1);

    switch (GLOBAL_STATE->device_model) {
    case DEVICE_NERDQAXE_PLUS:
        power_management_turn_on();
        break;
    default:
    }

    vTaskDelay(3000 / portTICK_PERIOD_MS);

    uint16_t last_core_voltage = 0.0;
    uint16_t last_asic_frequency = power_management->frequency_value;
    uint64_t last_temp_request = esp_timer_get_time();

    while (1) {
        uint16_t core_voltage = nvs_config_get_u16(NVS_CONFIG_ASIC_VOLTAGE, CONFIG_ASIC_VOLTAGE);
        uint16_t asic_frequency = nvs_config_get_u16(NVS_CONFIG_ASIC_FREQ, CONFIG_ASIC_FREQUENCY);

        if (core_voltage != last_core_voltage) {
            ESP_LOGI(TAG, "setting new vcore voltage to %umV", core_voltage);
            VCORE_set_voltage((double) core_voltage / 1000.0, GLOBAL_STATE);
            last_core_voltage = core_voltage;
        }

        if (asic_frequency != last_asic_frequency) {
            ESP_LOGI(TAG, "setting new asic frequency to %uMHz", asic_frequency);
            // if PLL setting was found save it in the struct
            if ((*GLOBAL_STATE->ASIC_functions.send_hash_frequency_fn)((float) asic_frequency)) {
                power_management->frequency_value = (float) asic_frequency;
            }
            last_asic_frequency = asic_frequency;
        }

        // request chip temps all 15s
        if (esp_timer_get_time() - last_temp_request > 15000000llu) {
            BM1368_request_chip_temp();
            last_temp_request = esp_timer_get_time();
        }

        switch (GLOBAL_STATE->device_model) {
        case DEVICE_NERDQAXE_PLUS:
            float vin = TPS53647_get_vin();
            float iin = TPS53647_get_iin();
            float pin = TPS53647_get_pin();
            float pout = TPS53647_get_pout();
            float vout = TPS53647_get_vout();
            float iout = TPS53647_get_iout();

            influx_task_set_pwr(vin, iin, pin, vout, iout, pout);

            power_management->voltage = vin * 1000.0;
            power_management->current = iin * 1000.0;
            power_management->power = pin;
            EMC2302_get_fan_speed(&power_management->fan_rpm);
            break;
        default:
        }

        if (GLOBAL_STATE->asic_model == ASIC_BM1368) {
            switch (GLOBAL_STATE->device_model) {
            case DEVICE_NERDQAXE_PLUS:
                // 1st tmp1075 is measuring asic temps
                power_management->chip_temp_avg = TMP1075_read_temperature(0);
                // 2nd tmp1075 is on the back side below power stages and inductors
                power_management->vr_temp = TMP1075_read_temperature(1);
                influx_task_set_temperature(power_management->chip_temp_avg, power_management->vr_temp);
                break;
            default:
            }
        }

        if (auto_fan_speed == 1) {
            power_management->fan_perc = (float) automatic_fan_speed(power_management->chip_temp_avg, GLOBAL_STATE);
        } else {
            float fs = (float) nvs_config_get_u16(NVS_CONFIG_FAN_SPEED, 100);
            power_management->fan_perc = fs;
            switch (GLOBAL_STATE->device_model) {
            case DEVICE_NERDQAXE_PLUS:
                EMC2302_set_fan_speed((float) fs / 100);
                break;
            default:
            }
        }

        vTaskDelay(POLL_RATE / portTICK_PERIOD_MS);
    }
}
