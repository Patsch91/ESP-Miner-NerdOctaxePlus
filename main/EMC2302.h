#pragma once

#include "i2c_master.h"

#define EMC2302_ADDR 0x12 // todo

#define EMC2302_CONFIG 0x20
#define EMC2302_FAN_STATUS 0x24
#define EMC2302_STALL_STATUS 0x25
#define EMC2302_SPIN_STATUS 0x26
#define EMC2302_DRIVE_STATUS 0x27
#define EMC2302_FAN_IR_EN 0x29
#define EMC2302_POLARITY 0x2a
#define EMC2302_OUTPUT_CONFIG 0x2b
#define EMC2302_BASE_F45 0x2c
#define EMC2302_BASE_F123 0x2d

#define EMC2302_OFS_FAN_SETTING 0x00
#define EMC2302_OFS_FAN_DIVIDE 0x01
#define EMC2302_OFS_FAN_CONFIG1 0x02
#define EMC2302_OFS_FAN_CONFIG2 0x03
#define EMC2302_OFS_GAIN 0x05
#define EMC2302_OFS_SPIN_UP_CONFIG 0x06
#define EMC2302_OFS_MAX_STEP 0x07
#define EMC2302_OFS_MINIMUM_DRIVE 0x08
#define EMC2302_OFS_VALID_TACH_COUNT 0x09
#define EMC2302_OFS_DRIVE_FAIL_LSB 0x0a
#define EMC2302_OFS_DRIVE_FAIL_MSB 0x0b
#define EMC2302_OFS_TACH_TARGET_LSB 0x0c
#define EMC2302_OFS_TACH_TARGET_MSB 0x0d
#define EMC2302_OFS_TACH_READING_MSB 0x0e
#define EMC2302_OFS_TACH_READING_LSB 0x0f

#define EMC2302_FAN1 0x20
#define EMC2302_FAN2 0x40




void EMC2302_set_fan_speed(float);
uint16_t EMC2302_get_fan_speed(void);
bool EMC2302_init(bool);
