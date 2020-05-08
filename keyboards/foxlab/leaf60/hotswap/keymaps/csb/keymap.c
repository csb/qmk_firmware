#include QMK_KEYBOARD_H

enum keyboard_layers {
  _WB = 0, // Windows base layer
  _WF,     // Windows function layer
  _MB,     // MacOS base layer
  _MF,     // MacOS function layer
};

#define KC_CTES LCTL_T(KC_ESC)
#define KC_GUES LGUI_T(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_WB] = LAYOUT_60_tsangan_hhkb(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSPC,
    KC_CTES, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                   KC_ENT,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          MO(_WF),
    XXXXXXX, KC_LGUI, KC_LALT,                           KC_SPC,                                      KC_RALT, KC_LGUI,          XXXXXXX
  ),
	[_WF] = LAYOUT_60_tsangan_hhkb(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS, DF(_MB),
    _______, _______, _______, EEP_RST, RESET,   _______, _______, _______, KC_MPRV, KC_MNXT, KC_MPLY, KC_UP,   _______,         KC_DEL,
    _______, _______, _______, _______, _______, _______, _______, KC_VOLU, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT,                  _______,
    _______,          _______, _______, _______, _______, _______, _______, KC_VOLD, KC_END,  KC_PGDN, KC_DOWN, KC_MUTE,         _______,
    _______, _______, _______,                            _______,                                     KC_F24,  KC_F23,          _______
  ),
  [_MB] = LAYOUT_60_tsangan_hhkb(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSPC,
    KC_GUES, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                   KC_ENT,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          MO(_MF),
    XXXXXXX, KC_LCTL, KC_LALT,                           KC_SPC,                                      KC_RALT, KC_LCTL,          XXXXXXX
  ),
	[_MF] = LAYOUT_60_tsangan_hhkb(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS, DF(_MB),
    _______, _______, _______, EEP_RST, RESET,   _______, _______, _______, KC_MRWD, KC_MFFD, KC_MPLY, KC_UP,   _______,         KC_DEL,
    _______, _______, _______, _______, _______, _______, _______, KC_VOLU, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT,                  _______,
    _______,          _______, _______, _______, _______, _______, _______, KC_VOLD, KC_END,  KC_PGDN, KC_DOWN, KC_MUTE,         _______,
    _______, _______, _______,                            _______,                                     KC_F24,  KC_F23,          _______
  ),
};
