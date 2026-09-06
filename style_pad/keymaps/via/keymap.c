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
    )
};
enum layer_names {
	_WIN_DAILY = 0,
	_WIN_GAMING = 1,
	_WIN_CODING = 2,
	_WIN_MISC = 3
};

    #ifdef OLED_ENABLE
bool oled_task_user(void) {

oled_set_cursor(0, 1);

switch (get_highest_layer(layer_state)) {
		case _WIN_DAILY:
			oled_write("Daily", false);
			break;
		case _WIN_GAMING:
			oled_write("Gaming", false);
			break;
		case _WIN_CODING:
			oled_write("Coding", false);
			break;
		case _WIN_MISC:
			oled_write("Misc", false);
			break;
		default:
			oled_write("Welcome!", false);
	}

	return false;
};
   
 #endif