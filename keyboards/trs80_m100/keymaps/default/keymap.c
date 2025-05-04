// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum Layers {
    BASE,
    NUM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
     * ┌──┬──┬──┬──┐ ┌──┬──┬──┬──┐ ┌───┬───┬───┬───┐ ┌──┬──┬──┬──┐
     * │F1│F2│F3│F4│ |F5│F6│F7│F8│ |PST|LBL|PRT|PSE| | ←│ →│ ↑│ ↓│
     * ├──┴┬─┴─┬┴──┼─┴─┬┴──┼──┴┬─┴─┼───┼───┼───┼───┼─┴─┬┴──┼──┴──┤
     * │ESC│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ DEL │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬┴─────┤
     * │ TAB │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [] │      |
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤ ENT  |
     * │ CTRL │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ " │      │
     * └─┬────┼───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┬┘
     *   │CAPS|SHFT│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │SHFT│
     *   └────┴────┴───┴┬──┴───┴───┴───┴───┴───┴───┴┬──┴┬───────┘
     *             │GRPH│                      │CODE│NUM│
     *             └────┴──────────────────────┴────┴───┘
     */

    // Page 26 on https://archive.org/details/TandyM100ServiceManual/page/n25/mode/2up

    //GRPH == Left GUI
    //CODE == Right Alt
    //LABEL == ??

    [BASE] = LAYOUT(
        KC_L,    KC_K,    KC_I,    KC_SLSH,  KC_8,    KC_DOWN,  KC_ENT,  KC_F8,   KC_PAUS,
        KC_M,    KC_J,    KC_U,    KC_DOT,   KC_7,    KC_UP,    /*KC_PRINT,*/KC_TRNS, KC_F7,   KC_TRNS,
        KC_N,    KC_H,    KC_Y,    KC_COMMA, KC_6,    KC_RIGHT, /*KC_LABEL,*/KC_TRNS, KC_F6,   KC_CAPS,
        KC_B,    KC_G,    KC_T,    KC_QUOT,  KC_5,    KC_LEFT,  /*KC_PASTE,*/KC_TRNS, KC_F5,  TG(NUM),
        KC_V,    KC_F,    KC_R,    KC_SCLN,  KC_4,    KC_EQL,   KC_ESC,  KC_F4,   KC_RIGHT_ALT,
        KC_C,    KC_D,    KC_E,    KC_LBRC,  KC_3,    KC_MINS,  KC_TAB,  KC_F3,   KC_LEFT_GUI,
        KC_X,    KC_S,    KC_W,    KC_P,     KC_2,    KC_0,     KC_BSPC, KC_F2,   KC_LCTL,
        KC_Z,    KC_A,    KC_Q,    KC_O,     KC_1,    KC_9,     KC_SPC,  KC_F1,   KC_RSFT
    ),

    [NUM] = LAYOUT(
        KC_3,    KC_2,    KC_5,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_0,    KC_1,    KC_4,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, TG(BASE),
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_6,     KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
    )


};