// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "quantum.h"
#ifdef OLED_ENABLE
#    include "oled_driver.h"
#endif


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *				┌───┐
     *				│Enc│
	 * 		┌───┬───┼───┤
	 * 		│ x │ x │ x │
	 * 	┌───┼───┼───┼───┤
	 * 	│FnU│ x │ x │ x │
	 * 	├───┼───┼───┼───┤
	 * 	│FnD│ x │ x │ x │
	 * 	└───┴───┴───┴───┘ 
     */
    [0] = LAYOUT_3x4_encoder(
									KC_MUTE,
					KC_P7,	KC_P8,	KC_P9,
        KC_PENT,	KC_P4,	KC_P5,	KC_P6,
        KC_P0,		KC_P1,	KC_P2,	KC_P3
	),
	[1] = 
};

#ifdef ENCODER_ENABLE
const uint16_t PROGMEM encoder_map[][1][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif


#ifdef OLED_ENABLE
bool oled_task_user(void) {
	uint8_t vol = 50;
	uint8_t layer = get_highest_layer(layer_state);
	// write layer
	oled_set_cursor(0,0);
	oled_write_P(PSTR("LAYER:"), false);
	oled_write_ln(get_u8_str(layer, ' '), false);
	// write vol
	oled_set_cursor(0, 2);
    oled_write_P(PSTR("VOL:"), false);
    oled_write_ln(get_u8_str(volume, ' '), false);
    return false;
}
#endif

