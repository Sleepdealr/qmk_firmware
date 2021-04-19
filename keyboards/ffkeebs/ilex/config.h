/*
Copyright 2021 Sleepdealer

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x4646 // FF
#define PRODUCT_ID   0x0002
#define DEVICE_VER   0x0001
#define MANUFACTURER FootFingers
#define PRODUCT      ilex

/* key matrix size
   Rows are doubled-up */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

//                        0 ,  1 , 2  , 3 , 4 , 5
#define MATRIX_ROW_PINS { A1, D15, A2 , A0}
#define MATRIX_COL_PINS { D1, A3 , D14, D6, D7, D16 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define USE_SERIAL
#define SERIAL_USE_MULTI_TRANSACTION
#define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6

#define BACKLIGHT_PIN D8
#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_BREATHING

#define ENCODERS_PAD_A { D4 }
#define ENCODERS_PAD_B { D5 }

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
