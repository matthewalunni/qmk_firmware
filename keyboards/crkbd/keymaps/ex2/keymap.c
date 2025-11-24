/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 0: Base (QWERTY)
    [0] = LAYOUT_split_3x6_3_ex2(
  //,---------------------------------------------------------------.                    ,---------------------------------------------------------------.
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  MO(2),                        TG(4),    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
      KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  MO(3),                        TG(5),    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                           KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(1),  KC_SPC,                        KC_SPC, KC_RALT,  KC_ENT
                                      //`--------------------------'                    `--------------------------'
  ),

    // Layer 1: Code (Symbols & Brackets)
    [1] = LAYOUT_split_3x6_3_ex2(
  //,---------------------------------------------------------------.                    ,---------------------------------------------------------------.
       KC_ESC, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, _______,                      _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
      KC_TAB, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,                      _______, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                        KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(1),  KC_SPC,                        KC_SPC, KC_RALT,  KC_ENT
                                      //`--------------------------'                    `--------------------------'
  ),

    // Layer 2: Extra (Vim arrows, Function keys, Media)
    [2] = LAYOUT_split_3x6_3_ex2(
  //,---------------------------------------------------------------.                    ,---------------------------------------------------------------.
       KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, _______,                      _______,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
      KC_TAB,  KC_F11,  KC_F12, XXXXXXX, XXXXXXX, XXXXXXX, _______,                      _______, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,  KC_F11,  KC_F12,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_VOLU,                                        KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(1),  KC_SPC,                        KC_SPC, KC_RALT,  KC_ENT
                                      //`--------------------------'                    `--------------------------'
  ),

    // Layer 3: Number (Right-hand numpad) - TOGGLE LAYER
    [3] = LAYOUT_split_3x6_3_ex2(
  //,---------------------------------------------------------------.                    ,---------------------------------------------------------------.
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, _______,                      _______,    KC_7,    KC_8,    KC_9, KC_0, KC_PSLS, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
      KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, _______,                      _______,    KC_4,    KC_5,    KC_6, KC_PPLS, KC_PMNS, KC_PEQL,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                           KC_1,    KC_2,    KC_3, KC_PDOT, KC_PENT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(1),  KC_SPC,                        KC_SPC, KC_RALT,  KC_ENT
                                      //`--------------------------'                    `--------------------------'
  ),

    // Layer 4: Navigation (Page up/down, Home/End, etc) - TOGGLE LAYER
    [4] = LAYOUT_split_3x6_3_ex2(
  //,---------------------------------------------------------------.                    ,---------------------------------------------------------------.
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, _______,                      _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_DEL, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
      KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, _______,                      _______, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                        KC_PGDN, KC_PGUP, KC_HOME,  KC_END, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(1),  KC_SPC,                        KC_SPC, KC_RALT,  KC_ENT
                                      //`--------------------------'                    `--------------------------'
  ),

    // Layer 5: Adjust (LED/RGB & Firmware)
    [5] = LAYOUT_split_3x6_3_ex2(
  //,---------------------------------------------------------------.                    ,---------------------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
      RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, XXXXXXX, XXXXXXX, XXXXXXX,                      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
      RM_NEXT, RM_HUED, RM_SATD, RM_VALD, XXXXXXX, XXXXXXX,                                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(1),  KC_SPC,                        KC_ENT, KC_RALT,  KC_DEL
                                      //`--------------------------'                    `--------------------------'
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [4] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [5] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
