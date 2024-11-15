#include QMK_KEYBOARD_H
#include "version.h"

#include "moonlander.h"
#include "mikker.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NO,   KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,  KC_NO,           KC_NO,
        KC_NO,   KC_Q,         KC_W,  KC_E,  KC_R,  KC_T,  KC_NO,            KC_NO, KC_Y,  KC_U,    KC_I,    KC_O,   KC_P,            KC_NO,
        KC_NO,   KC_A,         KC_S,  KC_D,  KC_F,  KC_G,  KC_NO,            KC_NO, KC_H,  KC_J,    KC_K,    KC_L,   KC_SCLN,         KC_NO,
        KC_NO,   LCTL_T(KC_Z), KC_X,  KC_C,  KC_V,  KC_B,                           KC_N,  KC_M,    KC_COMM, KC_DOT, RCTL_T(KC_SLSH), KC_NO,
        KC_SCRL, KC_NO,        KC_NO, KC_NO, TL_LOWR,               KC_NO,    KC_NO,       TL_UPPR, KC_NO,   KC_NO,  KC_NO,           KC_NO,
                                            KC_SPC, KC_NO, KC_NO,    KC_NO, KC_NO, KC_LSFT
    ),
    [1] = LAYOUT(
        KC_NO, KC_NO,   KC_NO,   KC_NO,        KC_NO,        KC_NO,   KC_NO,       KC_NO, KC_NO,   KC_NO,   KC_NO,         KC_NO,         KC_NO,   KC_NO,
        KC_NO, KC_TAB,  SW_TAB,  SW_BTICK,     SW_CTAB,      KC_VOLU, KC_NO,       KC_NO, KC_BSLS, KC_NO,   LGUI(KC_LBRC), LGUI(KC_RBRC), KC_BSPC, KC_NO,
        KC_NO, OS_CTRL, OS_ALT,  OS_CMD,       OS_SHFT,      KC_VOLD, KC_NO,       KC_NO, KC_LEFT, KC_DOWN, KC_UP,         KC_RGHT,       KC_ENT,  KC_NO,
        KC_NO, DM_REC1, DM_PLY1, LGUI(KC_C),   LGUI(KC_V),   KC_MPLY,                     CW_TOGG, SELWORD, SGUI(KC_LBRC), SGUI(KC_RBRC), KC_F12,  KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,        KC_TRNS,          KC_NO,     KC_NO,                 KC_TRNS, KC_NO,         KC_NO,         KC_NO,   KC_NO,
                                                 KC_TRNS, KC_NO, KC_NO,     KC_NO, KC_NO, KC_TRNS
    ),
    [2] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_ESC, KC_EXLM, KC_HASH, KC_DLR, KC_PERC, KC_NO,        KC_NO, KC_CIRC, KC_AMPR, KC_LBRC, KC_RBRC, KC_BSLS, KC_NO,
        KC_NO, KC_MINS, KC_ASTR, KC_EQL, KC_UNDS, KC_AT, KC_NO,         KC_NO, KC_PIPE, OS_SHFT, OS_CMD, OS_ALT, OS_CTRL, KC_NO,
        KC_NO, KC_PLUS, KC_GRV, KC_DQUO, KC_QUOT, KC_DOT,                      KC_TILD, KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,            KC_NO, KC_NO,                   KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO,
                                    KC_TRNS, KC_NO, KC_NO,          KC_NO, KC_NO, KC_TRNS
    ),
    [3] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_ESC, KC_NO, RGB_HUI, RGB_MOD, RGB_VAI, KC_NO,         KC_NO, KC_PMNS, KC_7, KC_8, KC_9, KC_PPLS, KC_NO,
        KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, RGB_VAD, KC_NO,      KC_NO, KC_PAST, KC_4, KC_5, KC_6, KC_0, KC_NO,
        KC_NO, KC_NO, KC_COMM, KC_DOT, KC_NO, RGB_TOG,                         KC_PSLS, KC_1, KC_2, KC_3, KC_EQL, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,            KC_NO, KC_NO,                   KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO,
                                    KC_TRNS, KC_NO, KC_NO,      KC_NO, KC_NO, KC_TRNS
    )
};

