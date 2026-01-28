// Copyright 2026 brauschen
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │NLk│ / │ * │ - │
     * ├───┼───┼───┼───┤
     * │ 7 │ 8 │ 9 │ + │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ + │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │Ent│
     * ├───┼───┼───┼───┤
     * │ 0 │Fn │ . │Ent│
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_numpad_5x4(
        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_P0,   MO(1),   KC_PDOT, KC_PENT
    ),

    /*
     * ┌───┬───┬───┬───┐
     * │   │   │   │   │
     * ├───┼───┼───┼───┤
     * │Hom│ ↑ │PgU│   │
     * ├───┼───┼───┼───┤
     * │ ← │   │ → │   │
     * ├───┼───┼───┼───┤
     * │End│ ↓ │PgD│   │
     * ├───┼───┼───┼───┤
     * │Ins│   │Del│   │
     * └───┴───┴───┴───┘
     */
    [1] = LAYOUT_numpad_5x4(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_HOME, KC_UP,   KC_PGUP, KC_NO,
        KC_LEFT, KC_NO,   KC_RGHT, KC_NO,
        KC_END,  KC_DOWN, KC_PGDN, KC_NO,
        KC_INS,  KC_TRNS, KC_DEL,  KC_NO
    )
};
