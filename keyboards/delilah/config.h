<<<<<<< HEAD
#ifndef CONFIG_H
#define CONFIG_H
=======
/* Copyright 2021 Regan Palmer
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
>>>>>>> upstream/vial

#include "config_common.h"

/* USB Device descriptor parameter */
<<<<<<< HEAD
#define VENDOR_ID       0x726b
#define PRODUCT_ID      0x645c
#define DEVICE_VER      0x0001
#define MANUFACTURER    rainkeebs
#define PRODUCT         Delilah
#define DESCRIPTION     12.25u stagger
=======
#define VENDOR_ID       0x726B
#define PRODUCT_ID      0x645C
#define DEVICE_VER      0x0001
#define MANUFACTURER    rainkeebs
#define PRODUCT         Delilah
>>>>>>> upstream/vial

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { B5, B6, C6, C7 }
#define MATRIX_COL_PINS { F7, F6, F5, F4, F0, E6, D5, D3, D4, D6, D7, B4 }
#define UNUSED_PINS

<<<<<<< HEAD
#define VIAL_KEYBOARD_UID {0x51, 0xE3, 0x9E, 0x5B, 0xC8, 0x3E, 0x80, 0x30}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS {0 , 11}


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5
=======
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
>>>>>>> upstream/vial

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

<<<<<<< HEAD
/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS
=======
>>>>>>> upstream/vial

#define RGB_DI_PIN B3
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 8
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif
<<<<<<< HEAD

#endif
=======
>>>>>>> upstream/vial
