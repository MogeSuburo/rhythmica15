// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──┬──┬──┬──┬─┬─┐
     * │SFT │  2 │ 3  │  5 │6 │7 │
     * ├──┼─┬┴┬─┼─┬┴┬┴┬┴┬─┐
     * │CTL │Q │W │E │R │T │Y │U │I │ 
     * └──┴─┴─┴─┴─┴─┴─┴─┴─┘
     */
    [0] = LAYOUT(
      KC_LSFT, KC_2, KC_3, KC_NO, KC_NO,KC_5, KC_6, KC_7,
      KC_LCTL, KC_Q, KC_W, KC_E, KC_R, KC_NO, KC_T, KC_Y, KC_U, KC_I
      ),
    [1] = LAYOUT(
      KC_LSFT, KC_2, KC_3, KC_NO, KC_NO,KC_5, KC_6, KC_7,
      KC_LCTL, KC_Q, KC_W, KC_E, KC_R, KC_NO, KC_T, KC_Y, KC_U, KC_I
      ),
    [2] = LAYOUT(
      KC_LSFT, KC_2, KC_3, KC_NO, KC_NO,KC_5, KC_6, KC_7,
      KC_LCTL, KC_Q, KC_W, KC_E, KC_R, KC_NO, KC_T, KC_Y, KC_U, KC_I
    ),
    [3] = LAYOUT(
      KC_LSFT, KC_2, KC_3, KC_NO, KC_NO,KC_5, KC_6, KC_7,
      KC_LCTL, KC_Q, KC_W, KC_E, KC_R, KC_NO, KC_T, KC_Y, KC_U, KC_I
    )};
