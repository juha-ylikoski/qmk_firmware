// Copyright 2022 Shem Sedrick (@ssedrick)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


enum key_layers {
  _BASE,
  _COLEMAK,
  _RAISE,
  _LOWER
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define SH_ESC SFT_T(KC_ESC)
#define ____ KC_TRNS

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  debug_mouse=false;
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
      KC_1,    KC_2,    KC_3,    KC_4,   KC_5,                        KC_6,   KC_7,    KC_8,    KC_9,   KC_0,    KC_0,
      KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,                        KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,    KC_0,
      KC_A,    KC_S,    KC_D,    KC_F,   KC_G,                        KC_H,   KC_J,    KC_K,    KC_L,   KC_1, KC_0,
      KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,                            KC_N,        KC_4, KC_5, KC_2, KC_0,
                                      KC_F,   KC_G,                       KC_2,
                                        KC_V,   KC_B,                     KC_M,
                                                                          KC_1
      )

};
