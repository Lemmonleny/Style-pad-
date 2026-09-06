// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
 uint16_t timer;
const uint16_t PROGMEM keymaps [] [MATRIX_ROWS][MATRIX_COLS] = {
  
    [0] = LAYOUT(
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS, 
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS 

	),[1] = LAYOUT(
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS, 
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS 
    ),[2] = LAYOUT(
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS, 
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS  
    ),[3] = LAYOUT(
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS 
	),[4] = LAYOUT(
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS,   KC_TRNS
    )
};
    #ifdef OLED_ENABLE
bool oled_task_user(void) {

oled_set_cursor(0, 1);
oled_write("style_pad", false);

	return false;
};
   
 #endif