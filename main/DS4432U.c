#include <stdio.h>
#include <math.h>
#include "esp_log.h"

#include "i2c_master.h"

#include "DS4432U.h"

// DS4432U+ -- Adjustable current DAC
#define DS4432U_SENSOR_ADDR 0x48 // Slave address of the DS4432U+
#define DS4432U_OUT0_REG 0xF8    // register for current output 0
#define DS4432U_OUT1_REG 0xF9    // register for current output 1

static const char *TAG = "DS4432U";

/**
 * @brief Set the current DAC code for a specific DS4432U output.
 *
 * @param output The output channel (0 or 1).
 * @param code The current code value to set.
 * @return esp_err_t ESP_OK on success, or an error code on failure.
 */
esp_err_t DS4432U_set_current_code(uint8_t output, uint8_t code) {
    uint8_t reg = (output == 0) ? DS4432U_OUT0_REG : DS4432U_OUT1_REG;
    return i2c_master_register_write_byte(DS4432U_SENSOR_ADDR, reg, code);
}

/**
 * @brief Get the current DAC code value for a specific DS4432U output.
 *
 * @param output The output channel (0 or 1).
 * @param code Pointer to store the current code value.
 * @return esp_err_t ESP_OK on success, or an error code on failure.
 */
esp_err_t DS4432U_get_current_code(uint8_t output, uint8_t *code) {
    uint8_t reg = (output == 0) ? DS4432U_OUT0_REG : DS4432U_OUT1_REG;
    return i2c_master_register_read(DS4432U_SENSOR_ADDR, reg, code, 1);
}

bool DS4432U_test(void)
{
    uint8_t data;

    /* Read the DS4432U+ WHO_AM_I register, on power up the register should have the value 0x00 */
    esp_err_t register_result = i2c_master_register_read(DS4432U_SENSOR_ADDR, DS4432U_OUT0_REG, &data, 1);
    ESP_LOGI(TAG, "DS4432U+ OUT0 = 0x%02X", data);
    return register_result == ESP_OK;
}

void DS4432U_read(void)
{
    uint8_t data[3];

    /* Read the DS4432U+ WHO_AM_I register, on power up the register should have the value 0x00 */
    ESP_ERROR_CHECK(register_read(DS4432U_OUT0_REG, data, 1));
    ESP_LOGI(TAG, "DS4432U+ OUT1 = 0x%02X", data[0]);
}

static esp_err_t DS4432U_set(uint8_t val)
{
    ESP_LOGI(TAG, "Writing 0x%02X", val);
    esp_err_t ret = register_write_byte(DS4432U_OUT0_REG, val);
    if (ret != ESP_OK) {
        ESP_LOGE(TAG, "Failed to write 0x%02X to register 0x%02X, error: 0x%X", val, DS4432U_OUT0_REG, ret);
        return ret;
    }

    ESP_LOGI(TAG, "Successfully wrote 0x%02X to register 0x%02X", val, DS4432U_OUT0_REG);
    return ESP_OK;
}

bool DS4432U_set_vcore(float core_voltage)
{
    uint8_t reg_setting;

    reg_setting = voltage_to_reg(core_voltage);

    ESP_LOGI(TAG, "Set ASIC voltage = %.3fV [0x%02X]", core_voltage, reg_setting);

    esp_err_t ret = DS4432U_set(reg_setting); /// eek!
    if (ret != ESP_OK) return false;

    return true;
}