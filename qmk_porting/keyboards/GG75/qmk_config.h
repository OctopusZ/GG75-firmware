/*
Copyright 2022 Huckies <https://github.com/Huckies>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//* platform settings
#define DEBUG        Debug_UART1
#define DCDC_ENABLE  0
#define FREQ_SYS     60000000
#define LSE_ENABLE   0
#define BLE_SLOT_NUM 0
// #define HSE_LOAD_CAPACITANCE 7.5 // in pF unit
// #define LSE_LOAD_CAPACITANCE 7   // in pF unit
//#define I2C_IO_REMAPPING

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFDFE
#define PRODUCT_ID   0x000A
#define DEVICE_VER   0x0001
#define MANUFACTURER OctocKiesZ
#define PRODUCT      GG75

#define QMK_VERSION    "0.0.1"
#define QMK_BUILDDATE  __DATE__
#define QMK_KEYBOARD_H "GG75.h"

#define MATRIX_ROWS 6
#define MATRIX_COLS 16
#define MATRIX_ROW_PINS         \
    {                           \
        B4, B3, B2, B1, B0, B23 \
    }
#define MATRIX_COL_PINS                                                        \
    {                                                                          \
        A4, A5, A6, A0, A1, A12, A11, A10, A7, B9, B8, B17, B16, B15, B14, B13 \
    }
#define DIODE_DIRECTION       COL2ROW
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0

#ifdef ENCODER_ENABLE
#define ENCODERS_PAD_A \
    {                  \
        B6             \
    }
#define ENCODERS_PAD_B \
    {                  \
        B5             \
    }
#define ENCODER_RESOLUTION 4
#endif

#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP FALSE

//#define WS2812_EN_PIN   A3
//#define WS2812_EN_LEVEL 1

#define BATTERY_MEASURE_PIN A2

#ifdef RGB_MATRIX_ENABLE
#define RGB_DI_PIN A14

#define RGBLED_NUM                    96
#define RGB_MATRIX_LED_COUNT          96
#define DRIVER_LED_TOTAL              RGBLED_NUM
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 10
#define RGB_MATRIX_STARTUP_SPD 127 // Sets the default animation speed, if none has been set
#define RGB_MATRIX_STARTUP_VAL 6
#define RGB_MATRIX_HUE_STEP    10
#define RGB_MATRIX_SAT_STEP    8
#define RGB_MATRIX_VAL_STEP    2
#define RGB_MATRIX_SPD_STEP    10

#define RGB_DISABLE_WHEN_USB_SUSPENDED

#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHING
//#define ENABLE_RGB_MATRIX_BAND_SAT
#define ENABLE_RGB_MATRIX_BAND_VAL
//#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
//#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_DUAL_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_BREATHING
//#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#endif

#define DYNAMIC_KEYMAP_LAYER_COUNT 6
/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 10

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

#define OLED_DISPLAY_128X64
#define OLED_UPDATE_INTERVAL 75
/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define DIP_SWITCH_PINS \
    {                   \
        B22, B19, B18   \
    }

#define VIA_CUSTOM_LIGHTING_ENABLE
#include "pre_handler.h"


#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 2, 3 }


#define QMK_VERSION "f7120f-dirty"
#define QMK_BUILDDATE "2023-03-08-15:37:13"
#define CHIBIOS_VERSION "svn-mirror/ver21.11.2"
#define CHIBIOS_CONTRIB_VERSION "develop_2021_q3-232-gd03aa9"

#define BUILD_ID ((uint32_t)0x00E83C97)
