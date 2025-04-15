#pragma once

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#ifndef __ASSEMBLER__
// Define all of custom keycodes. Needs to be protected.
#include "quantum/keycodes.h"
#define SW_TAB QK_USER
#define SW_CTAB QK_USER + 1
#define SW_BTICK QK_USER + 2
#define SELWORD QK_USER + 3
#define UPDIR QK_USER + 4
#define OS_SHFT QK_USER + 5
#define OS_CTRL QK_USER + 6
#define OS_ALT QK_USER + 7
#define OS_CMD QK_USER + 8
#endif

