// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(SPECIAL,"Special")

#define UML_AE RALT(KC_Q)
#define UML_OE RALT(KC_P)
#define UML_UE RALT(KC_Y)
#define GER_SZ RALT(KC_S)
#define EU_EUR RALT(KC_5)

#define MIRYOKU_LAYER_SPECIAL \
U_NA,               U_NA,               U_NA,               U_NA,               U_NA,               /**/            U_NA,               U_NA,               UML_UE,             U_NA,               U_NA,                   \
UML_AE,             U_NA,               GER_SZ,             U_NA,               U_NA,               /**/            U_NA,               U_NA,               U_NA,               U_NA,               UML_OE,                 \
EU_EUR,             U_NA,               U_NA,               U_NA,               U_NA,               /**/            U_NA,               U_NA,               U_NA,               U_NA,               U_NA,                   \
U_NP,               U_NP,               U_NA,               U_NA,               U_NA,               /**/            U_NA,               U_NA,               U_NA,               U_NP,               U_NP

#define MIRYOKU_LAYER_BASE \
KC_Q,               KC_W,               KC_F,               KC_P,               KC_B,               /**/            KC_J,               KC_L,               KC_U,               KC_Y,               KC_QUOT,                \
LGUI_T(KC_A),       LALT_T(KC_R),       LCTL_T(KC_S),       LSFT_T(KC_T),       KC_G,               /**/            KC_M,               LSFT_T(KC_N),       LCTL_T(KC_E),       LALT_T(KC_I),       LGUI_T(KC_O),           \
LT(U_BUTTON,KC_Z),  ALGR_T(KC_X),       KC_C,               KC_D,               KC_V,               /**/            KC_K,               KC_H,               KC_COMM,            ALGR_T(KC_DOT),     LT(U_BUTTON,KC_SLSH),   \
U_NP,               U_NP,               LT(U_SPECIAL,KC_ESC), LT(U_NAV,KC_SPC), LT(U_MOUSE,KC_TAB), /**/            LT(U_SYM,KC_ENT),   LT(U_NUM,KC_BSPC),  LT(U_FUN,KC_DEL),   U_NP,               U_NP

#define MIRYOKU_LAYER_SYM \
KC_AT,              KC_HASH,            KC_LBRC,            KC_RBRC,            KC_QUES,            /**/            KC_EXLM,           KC_LABK,            KC_RABK,            KC_AMPR,            KC_PERC,                \
KC_ASTR,            KC_PERC,            KC_MINS,            KC_COLN,            KC_DQUO,            /**/            KC_QUOT,           KC_SLSH,            KC_BSLS,            KC_UNDS,            KC_SCLN,                \
KC_DLR,             KC_PLUS,            KC_LPRN,            KC_RPRN,            KC_EQL,             /**/            KC_CIRC,           KC_LCBR,            KC_RCBR,            KC_GRAVE,           KC_TILD,                \
U_NP,               U_NP,               U_NA,               U_NA,               U_NA,               /**/            U_NU,              U_NA,               U_NA,               U_NP,               U_NP

#define MIRYOKU_LAYERMAPPING_SPECIAL MIRYOKU_MAPPING

#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 120
#define SPLIT_WPM_ENABLE

