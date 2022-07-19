#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _NUMPAD 1
#define _MOUSE 2
#define _SYMBO 3

// Some basic macros
#define TASK   LCTL(LSFT(KC_ESC))
#define TAB_R  LCTL(KC_TAB)
#define TAB_L  LCTL(LSFT(KC_TAB))
#define TAB_RO LCTL(LSFT(KC_T))
#define CPY_PT LALT(KC_P3) // might as well give it a shot eh?

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x7(
        // left hand
        KC_ESC,    KC_1,    KC_2,    KC_3,   KC_4,              KC_5,      KC_DEL,
        KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_R,              KC_T,      KC_BSPC,
        KC_HOME,   KC_A,    KC_S,    KC_D,   LT(_MOUSE, KC_F),  KC_G,      KC_ENT,
        MO(_NUMPAD),KC_Z,   KC_X,    KC_C,   KC_V,              KC_B,      KC_END,
        KC_GRV,    KC_LGUI, KC_LCTL, KC_LALT,KC_PAUSE,

                                     KC_SPC, KC_LCTL,
                                     MO(_SYMBO), KC_LSFT, //37 keys
        // right hand
                          KC_MPLY, KC_6,    KC_7,    KC_8,    KC_9,      KC_0,     KC_MINS,
                          KC_BSPC, KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_BSLS,
                          KC_ENT,  KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  MT(KC_END,KC_QUOT),
                          KC_HOME, KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_PGUP,
                                            KC_VOLU, KC_VOLD,  KC_EQL,  TG(_NUMPAD),KC_PGDN,
             KC_ENT,     KC_RSFT,
             MO(_MOUSE), KC_RCTL,
             KC_DEL,     KC_BSPC //39 keys
    ),

    [_NUMPAD] = LAYOUT_5x7(
        // left hand
        QK_BOOT,   _______,   _______,   _______,   _______,   _______,   _______,
        QK_REBOOT, _______,   KC_P7,     KC_P8,     KC_P9,     KC_PAST,   KC_PSLS,
        RESET,     _______,   KC_P4,     KC_P5,     KC_P6,     KC_PPLS,   KC_PMNS,
        _______,   _______,   KC_P1,     KC_P2,     KC_P3,     KC_TAB,    _______,
        _______,   _______,   KC_P0,    KC_PDOT,    KC_P0,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          QK_BOOT,   _______,   _______,   _______,   KC_PMNS,   KC_PPLS,   _______,
                          QK_REBOOT, _______,   KC_P7,     KC_P8,     KC_P9,     KC_PAST,   _______,
                          RESET,     _______,   KC_P4,     KC_P5,     KC_P6,     KC_PAST,   _______,
                          _______,   KC_TAB,    KC_P1,     KC_P2,     KC_P3,     KC_PSLS,   _______,
                                                KC_P0,    KC_PDOT,    KC_P0,     KC_TRNS,   KC_TRNS,
             _______, _______,
             _______, _______,
             _______, _______
    ),

    [_MOUSE] = LAYOUT_5x7(
        // left hand
        _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   KC_WH_U,  _______,   _______,   _______,   _______,   _______,
        _______,   KC_WH_D,  KC_BTN3,   KC_BTN1,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          _______,   _______,   _______,   _______,  _______,   _______,   _______,
                          _______,   KC_CUT,    KC_COPY,   KC_WH_U, KC_PASTE,   KC_RCTL,   _______,
                          _______,   KC_LWIN,   KC_BTN1,   KC_WH_D,  KC_BTN3,   _______,   KC_ESC,
                          _______,   CPY_PT,    KC_WBAK,   KC_BTN2,   KC_WFWD,   KC_RSFT,   _______,
                                                _______,   _______,   _______,   _______,   _______,
             _______, _______,
             _______, _______,
             _______, _______
    ),

    [_SYMBO] = LAYOUT_5x7(
        // left hand
        _______,   KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,
                                    _______, _______,
                                    _______, _______,
        // right hand
                          _______,   KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,
                          _______,   _______,   _______,   KC_UP,     KC_LBRC,   KC_RBRC,   _______,
                          _______,   _______,   KC_LEFT,   KC_DOWN,   KC_RIGHT,  _______,   _______,
                          _______,   _______,   _______,   _______,   _______,   _______,   _______,
                                                _______,   _______,   _______,   _______,   KC_F12,
             _______, _______,
             _______, _______,
             _______, _______
    ),
};
