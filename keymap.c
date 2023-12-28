#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAMBDA,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_LAYER0] = LAYOUT(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_EQL, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_BSPC, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_DEL, KC_LALT, KC_LSFT, LT(1,KC_SPC), LT(2,KC_ENT), KC_LSFT, KC_LGUI),

[_LAYER1] = LAYOUT(KC_ESC, KC_F2, KC_F3, KC_UP, LSFT(KC_F5), KC_F5, LSFT(LCTL(KC_SPC)), KC_UNDS, KC_MINS, KC_BSLS, LCTL(LSFT(KC_F9)), KC_NO, KC_TAB, KC_F9, KC_LEFT, KC_DOWN, KC_RGHT, LSFT(KC_F12), LALT(KC_RGHT), KC_LPRN, KC_LCBR, KC_LBRC, KC_NO, KC_BSPC, KC_LCTL, LCTL(KC_Z), KC_F10, KC_F11, KC_F12, LCTL(KC_Y), LALT(KC_LEFT), KC_RPRN, KC_RCBR, KC_RBRC, KC_NO, KC_DEL, KC_LALT, KC_LSFT, KC_TRNS, LT(3,KC_ENT), KC_LSFT, KC_LGUI),

[_LAYER2] = LAYOUT(KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_ASTR, KC_F1, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_TAB, KC_AMPR, KC_PIPE, KC_QUOT, KC_DQUO, KC_CIRC, KC_END, KC_4, KC_5, KC_6, LAMBDA, KC_BSPC, KC_LCTL, KC_GRV, KC_TILD, KC_MINS, KC_PLUS, KC_PERC, KC_HOME, KC_1, KC_2, KC_3, KC_INS, KC_DEL, KC_LALT, KC_LSFT, LT(3,KC_SPC), KC_TRNS, KC_LSFT, KC_LGUI),

[_LAYER3] = LAYOUT(KC_ESC, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO, KC_NO, KC_VOLU, KC_VOLD, KC_NO, KC_NO, KC_TAB, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, LGUI(LCTL(KC_RIGHT)), KC_MPRV, KC_MPLY, KC_MNXT, LALT(KC_F4), KC_BSPC, KC_LCTL, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(LCTL(KC_LEFT)), KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_LALT, KC_LSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LGUI) 

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case LAMBDA:
        if (record->event.pressed) {
            SEND_STRING("=>");
        }
        break;
    }
    return true;
};