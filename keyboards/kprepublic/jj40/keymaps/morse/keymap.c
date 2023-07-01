/* Copyright 2019
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
#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |   1  |   2  |   3  |   4  |   5  | Esc  | Bksp |   6  |   7  |   8  |   9  |   0  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   Q  |   W  |   E  |   R  |   T  |  F1  |  F6  |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  | Func |   +  |   H  |   J  |   K  |   L  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |    Enter    |   N  |   M  | Left | Right| Ctrl |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_mit(
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_ESC,  KC_BSPC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_F1,   KC_F6,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    MO(1),   KC_PLUS, KC_H,    KC_J,    KC_K,    KC_L,    KC_SLSH,
  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_ENT,      KC_N,    KC_M,    KC_LEFT, KC_RGHT, KC_RCTL
),

/* Function
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |      | Del  |  F6  |  F7  |  F8  |  F9  | F10  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      | Incr | lOwer|      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |   =  |      |      |      | Light|   ?  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |Colour|Colour|      |             |      |      |   ,  |   .  |      |
 * `-----------------------------------------------------------------------------------'
 */
[_FN] = LAYOUT_planck_mit(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, _______,  KC_DEL,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_VAI, RGB_VAD, _______,
  _______, _______, _______, _______, _______, _______, KC_EQL,  _______, _______, _______, RGB_TOG, KC_QUES,
  _______, _______, RGB_HUI, RGB_HUD, _______,      _______,     _______, _______, KC_COMM, KC_DOT,  _______
)
};
