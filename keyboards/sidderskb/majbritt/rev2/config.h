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
#define VENDOR_ID       0x534B // SB
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0002
#define MANUFACTURER    SiddersKb
#define PRODUCT         Majbritt

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS { B0, B1, F7, C6, B5}
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, C7, B6, D6, B4, D4, D7, D5 ,D3, D2, D1, D0}

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define VIAL_KEYBOARD_UID {0x01, 0xD1, 0x91, 0x2C, 0xC0, 0xF8, 0xDE, 0xB1}

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION