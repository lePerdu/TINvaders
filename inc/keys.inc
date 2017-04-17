; keys.inc
#ifndef _KEYS_INC
#define _KEYS_INC

KEYPORT .equ $01

GROUP1 .equ %10111111
GROUP2 .equ %11011111
GROUP3 .equ %11101111
GROUP4 .equ %11110111
GROUP5 .equ %11111011
GROUP6 .equ %11111101
GROUP7 .equ %11111110

KEY_GRAPH   .equ %11111110
KEY_TRACE   .equ %11111101
KEY_ZOOM    .equ %11111011
KEY_WINDOW  .equ %11110111
KEY_Y_EQ    .equ %11101111
KEY_2ND     .equ %11011111
KEY_MODE    .equ %10111111
KEY_DEL     .equ %01111111

KEY_STO     .equ %11111101
KEY_LN      .equ %11111011
KEY_LOG     .equ %11110111
KEY_X_2     .equ %11101111
KEY_X_1     .equ %11011111
KEY_MATH    .equ %10111111
KEY_ALPHA   .equ %01111111

KEY_0       .equ %11111110
KEY_1       .equ %11111101
KEY_4       .equ %11111011
KEY_7       .equ %11110111
KEY_COMMA   .equ %11101111
KEY_SIN     .equ %11011111
KEY_APPS    .equ %10111111
KEY_XTON    .equ %01111111

KEY_DOT     .equ %11111110
KEY_2       .equ %11111101
KEY_5       .equ %11111011
KEY_8       .equ %11110111
KEY_L_PAREN .equ %11101111
KEY_COS     .equ %11011111
KEY_PRGM    .equ %10111111
KEY_STAT    .equ %01111111

KEY_NEG     .equ %11111110
KEY_3       .equ %11111101
KEY_6       .equ %11111011
KEY_9       .equ %11110111
KEY_R_PAREN .equ %11101111
KEY_TAN     .equ %11011111
KEY_VARS    .equ %10111111

KEY_ENTER   .equ %11111110
KEY_ADD     .equ %11111101
KEY_SUB     .equ %11111011
KEY_MUL     .equ %11110111
KEY_DIV     .equ %11101111
KEY_EXPON   .equ %11011111
KEY_CLEAR   .equ %10111111

KEY_DOWN    .equ %11111110
KEY_LEFT    .equ %11111101
KEY_RIGHT   .equ %11111011
KEY_UP      .equ %11110111

#macro SET_KEY_GROUP(G)
    ld a, $ff
    out (KEYPORT), a
    ld a, G
    out (KEYPORT), a
#endmacro

#macro GET_KEY()
    in a, (KEYPORT)
#endmacro

#macro IS_KEY_DOWN(G, K)
    SET_KEY_GROUP(G)
    GET_KEY()
    cp K
#endmacro

#endif ; _KEYS_INC

