#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER   PsychicTaco13
#define PRODUCT         Taco Truck

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { C2, D0, D1, D2 }
#define MATRIX_COL_PINS { B2, B1, B3, B4, B5, B6, B7, C7, D6, D5, D4, D3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

#define RGB_DI_PIN C6
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 8
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif
