#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _NUMPAD 1

// Some basic macros
#define TASK   LCTL(LSFT(KC_ESC))
#define TAB_R  LCTL(KC_TAB)
#define TAB_L  LCTL(LSFT(KC_TAB))
#define TAB_RO LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x7(
        // left hand
        KC_ESC,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,
        KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_BSPC,
        KC_LCTL,   KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   TAB_RO,
        MO(_NUMPAD),KC_Z,   KC_X,    KC_C,   KC_V,   KC_B,   KC_ENT,
        QK_BOOT,   KC_LGUI, TAB_L,   TAB_R,  KC_RIGHT,
                                    KC_SPC, KC_LCTL,
                                    KC_END, KC_HOME, //37 keys
        // right hand
                          KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_GRV,
                          KC_RBRC, KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_BSLS,
                      TG(_NUMPAD), KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
                          KC_ENT,  KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  OSM(MOD_RSFT),
                                            KC_UP,   KC_DOWN,  KC_UP,    KC_DOWN,  KC_RGHT,
             KC_BSPC, KC_ENT,
             KC_PGUP, KC_PGDN,
             KC_LCTL, KC_LALT //39 keys
    ),

    [_NUMPAD] = LAYOUT_5x7(
        // left hand
        _______,   _______,   _______,   _______,   KC_PMNS,   KC_PPLS,   _______,
        _______,   _______,   KC_P7,     KC_P8,     KC_P9,     _______,   _______,
        _______,   _______,   KC_P4,     KC_P5,     KC_P6,     KC_PAST,   _______,
        _______,   _______,   KC_P1,     KC_P2,     KC_P3,     KC_PSLS,   _______,
        _______,   KC_P0,     KC_PDOT,   _______,   _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          _______,   _______,   KC_NLCK,   _______,   KC_PMNS,   KC_PPLS,   _______,
                          _______,   _______,   KC_P7,     KC_P8,     KC_P9,     _______,   _______,
                          _______,   _______,   KC_P4,     KC_P5,     KC_P6,     KC_PAST,   _______,
                          _______,   _______,   KC_P1,     KC_P2,     KC_P3,     KC_PSLS,   _______,
                                                _______,   KC_P0,     KC_PDOT,   _______,   _______,
             _______, KC_PENT,
             _______, _______,
             _______, _______
    ),
};
