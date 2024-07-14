#include "ui.h"

#ifndef UI_FONT_OPENSANSBOLD24
#define UI_FONT_OPENSANSBOLD24 1
#endif

#if UI_FONT_OPENSANSBOLD24

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x6, 0xff,
    0x60,

    /* U+0022 "\"" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xc6, 0xc6,

    /* U+0023 "#" */
    0x7, 0x38, 0xe, 0x70, 0x1c, 0xc0, 0x31, 0x80,
    0x67, 0xf, 0xff, 0xdf, 0xff, 0xbf, 0xff, 0xc,
    0x60, 0x19, 0xc3, 0xff, 0xf7, 0xff, 0xef, 0xff,
    0xc3, 0x18, 0x6, 0x70, 0x1c, 0xe0, 0x39, 0xc0,

    /* U+0024 "$" */
    0x6, 0x0, 0x60, 0x3f, 0xe7, 0xfe, 0xff, 0xef,
    0x60, 0xf6, 0xf, 0xe0, 0x7f, 0x81, 0xfc, 0x7,
    0xe0, 0x7f, 0x6, 0xfc, 0x6f, 0xff, 0xff, 0xfe,
    0x7f, 0x80, 0x60, 0x6, 0x0,

    /* U+0025 "%" */
    0x3c, 0x7, 0x7, 0xe0, 0x60, 0xff, 0xe, 0xe,
    0x71, 0xc0, 0xe7, 0x1c, 0xe, 0x73, 0x80, 0xe7,
    0x33, 0xce, 0x77, 0x7e, 0xff, 0x6f, 0xf7, 0xee,
    0xe7, 0x3d, 0xce, 0x70, 0x1c, 0xe7, 0x3, 0x8e,
    0x70, 0x38, 0xe7, 0x7, 0xe, 0x70, 0x60, 0x7e,
    0xe, 0x3, 0xc0,

    /* U+0026 "&" */
    0xf, 0xc0, 0xf, 0xf8, 0x7, 0xff, 0x1, 0xe3,
    0xc0, 0x78, 0xf0, 0x1e, 0x78, 0x3, 0xfe, 0x0,
    0x7e, 0x0, 0x3f, 0x7, 0x9f, 0xf1, 0xef, 0xbe,
    0xf3, 0xc7, 0xfc, 0xf0, 0xfe, 0x3e, 0x1f, 0x7,
    0xff, 0xe1, 0xff, 0xfc, 0x1f, 0xc7, 0x80,

    /* U+0027 "'" */
    0xff, 0xfd, 0x80,

    /* U+0028 "(" */
    0x1c, 0xe3, 0x9c, 0x71, 0xce, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0x87, 0x1c, 0x70, 0xe3, 0x87,

    /* U+0029 ")" */
    0xe1, 0xc7, 0xe, 0x38, 0xe1, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x73, 0x8e, 0x39, 0xc7, 0x38,

    /* U+002A "*" */
    0xe, 0x1, 0xc0, 0x38, 0x67, 0x3f, 0xff, 0xff,
    0xc7, 0xc0, 0xd8, 0x3b, 0x8f, 0x38, 0x44, 0x0,

    /* U+002B "+" */
    0xe, 0x0, 0xe0, 0xe, 0x0, 0xe0, 0xff, 0xff,
    0xff, 0xff, 0xf0, 0xe0, 0xe, 0x0, 0xe0, 0xe,
    0x0,

    /* U+002C "," */
    0x77, 0xfe, 0xe0,

    /* U+002D "-" */
    0xff, 0xff, 0xc0,

    /* U+002E "." */
    0x6f, 0xf6,

    /* U+002F "/" */
    0x3, 0xc0, 0xe0, 0x38, 0x1c, 0x7, 0x3, 0xc0,
    0xe0, 0x38, 0x1e, 0x7, 0x1, 0xc0, 0xe0, 0x38,
    0x1e, 0x7, 0x1, 0xc0, 0xf0, 0x0,

    /* U+0030 "0" */
    0x1f, 0x3, 0xfc, 0x7f, 0xe7, 0x9e, 0xf0, 0xff,
    0xf, 0xf0, 0xff, 0xf, 0xf0, 0xff, 0xf, 0xf0,
    0xff, 0xf, 0xf0, 0xf7, 0x9e, 0x7f, 0xe3, 0xfc,
    0x1f, 0x80,

    /* U+0031 "1" */
    0x7, 0x87, 0xcf, 0xef, 0xff, 0x7b, 0x3c, 0x1e,
    0xf, 0x7, 0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c,
    0x1e, 0xf, 0x7, 0x80,

    /* U+0032 "2" */
    0x1f, 0x87, 0xfe, 0xff, 0xe7, 0x1f, 0x0, 0xf0,
    0xf, 0x0, 0xf0, 0x1e, 0x3, 0xe0, 0x7c, 0xf,
    0x81, 0xe0, 0x3c, 0x7, 0x80, 0xff, 0xff, 0xff,
    0xff, 0xf0,

    /* U+0033 "3" */
    0x1f, 0x8f, 0xfe, 0x7f, 0xf6, 0x1f, 0x0, 0xf0,
    0xf, 0x1, 0xe1, 0xfc, 0x1f, 0x81, 0xfe, 0x1,
    0xf0, 0xf, 0x0, 0xf8, 0x1f, 0xff, 0xef, 0xfc,
    0x7f, 0x0,

    /* U+0034 "4" */
    0x1, 0xe0, 0x1f, 0x0, 0xf8, 0xf, 0xc0, 0xfe,
    0x6, 0xf0, 0x77, 0x87, 0x3c, 0x39, 0xe3, 0x8f,
    0x18, 0x79, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7,
    0x80, 0x3c, 0x1, 0xe0,

    /* U+0035 "5" */
    0x7f, 0xe7, 0xfe, 0x7f, 0xe7, 0x0, 0x70, 0x7,
    0x0, 0xff, 0x8f, 0xfe, 0xff, 0xe0, 0x1f, 0x0,
    0xf0, 0xf, 0x0, 0xfc, 0x1f, 0xff, 0xef, 0xfc,
    0x7f, 0x0,

    /* U+0036 "6" */
    0x7, 0xe1, 0xfe, 0x3f, 0xe7, 0xc0, 0x78, 0xf,
    0x0, 0xf3, 0xcf, 0x7e, 0xff, 0xef, 0x9f, 0xf0,
    0xff, 0xf, 0xf0, 0xf7, 0x9f, 0x7f, 0xe3, 0xfc,
    0xf, 0x80,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xff, 0xf0, 0xe, 0x0, 0xe0,
    0x1e, 0x1, 0xc0, 0x3c, 0x3, 0x80, 0x78, 0x7,
    0x0, 0xf0, 0xf, 0x0, 0xe0, 0x1e, 0x1, 0xc0,
    0x3c, 0x0,

    /* U+0038 "8" */
    0x1f, 0x87, 0xfe, 0xff, 0xff, 0x1f, 0xf0, 0xff,
    0xf, 0x7f, 0xe1, 0xf8, 0x1f, 0x83, 0xfc, 0x79,
    0xef, 0xf, 0xf0, 0xff, 0x9f, 0xff, 0xe7, 0xfe,
    0x1f, 0x80,

    /* U+0039 "9" */
    0x1f, 0x3, 0xfc, 0x7f, 0xef, 0x9e, 0xf0, 0xff,
    0xf, 0xf0, 0xff, 0x9f, 0xff, 0xf7, 0xef, 0x3c,
    0xf0, 0xe, 0x1, 0xe0, 0x3e, 0x7f, 0xc7, 0xf8,
    0x7e, 0x0,

    /* U+003A ":" */
    0x6f, 0xf6, 0x0, 0x0, 0x6, 0xff, 0x60,

    /* U+003B ";" */
    0x33, 0xde, 0x60, 0x0, 0x0, 0x0, 0x0, 0xf7,
    0x39, 0xdc,

    /* U+003C "<" */
    0x0, 0x10, 0x7, 0x1, 0xf0, 0x7e, 0x1f, 0x87,
    0xc0, 0xf0, 0xf, 0x80, 0x3f, 0x0, 0xfc, 0x3,
    0xf0, 0x7, 0x0, 0x10,

    /* U+003D "=" */
    0xff, 0xff, 0xff, 0xff, 0xf0, 0x0, 0xff, 0xff,
    0xff, 0xff, 0xf0,

    /* U+003E ">" */
    0x0, 0xc, 0x0, 0xf0, 0x7, 0xc0, 0x1f, 0x0,
    0x7c, 0x1, 0xf0, 0x3f, 0xf, 0xc7, 0xe0, 0xf8,
    0xe, 0x0, 0x0, 0x0,

    /* U+003F "?" */
    0x1f, 0x9f, 0xf9, 0xff, 0xb0, 0xf0, 0x1e, 0x3,
    0xc0, 0xf0, 0x7c, 0x1e, 0x3, 0x80, 0x70, 0x0,
    0x0, 0x0, 0x18, 0x7, 0x80, 0xf0, 0xc, 0x0,

    /* U+0040 "@" */
    0x1, 0xfc, 0x1, 0xff, 0xe0, 0x78, 0x1e, 0x1e,
    0x1, 0xe7, 0x9f, 0x9c, 0xe7, 0xf9, 0xf9, 0xc7,
    0x3f, 0x70, 0xe7, 0xee, 0x1c, 0xfd, 0xc3, 0x9f,
    0xb8, 0x73, 0xf7, 0x9e, 0xee, 0x7f, 0xfc, 0xe7,
    0xce, 0x1e, 0x0, 0x1, 0xe0, 0x30, 0x1f, 0xfe,
    0x0, 0xff, 0x0,

    /* U+0041 "A" */
    0x3, 0xe0, 0x3, 0xf0, 0x1, 0xf8, 0x0, 0xfe,
    0x0, 0xf7, 0x0, 0x73, 0x80, 0x39, 0xe0, 0x3c,
    0x70, 0x1e, 0x3c, 0xe, 0x1e, 0xf, 0xff, 0x7,
    0xff, 0xc3, 0xff, 0xe3, 0xc0, 0x71, 0xe0, 0x3c,
    0xe0, 0x1e, 0xf0, 0xf, 0x0,

    /* U+0042 "B" */
    0xff, 0x87, 0xff, 0x3f, 0xfd, 0xe3, 0xef, 0xf,
    0x78, 0x7b, 0xc7, 0xdf, 0xfc, 0xff, 0xc7, 0xff,
    0xbc, 0x3f, 0xe0, 0xff, 0x7, 0xf8, 0x7f, 0xff,
    0xdf, 0xfe, 0xff, 0xc0,

    /* U+0043 "C" */
    0x7, 0xe0, 0xff, 0xcf, 0xfe, 0xf8, 0x27, 0x80,
    0x7c, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0x7, 0x80, 0x3e, 0xc, 0xff,
    0xe3, 0xff, 0x7, 0xe0,

    /* U+0044 "D" */
    0xff, 0x83, 0xff, 0x8f, 0xff, 0x3c, 0x3e, 0xf0,
    0x7b, 0xc0, 0xff, 0x3, 0xfc, 0xf, 0xf0, 0x3f,
    0xc0, 0xff, 0x3, 0xfc, 0x1f, 0xf0, 0x7b, 0xc3,
    0xef, 0xff, 0x3f, 0xf8, 0xff, 0x0,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0xff, 0xc0, 0xf0, 0x3c, 0xf,
    0x3, 0xff, 0xff, 0xff, 0xff, 0x3, 0xc0, 0xf0,
    0x3c, 0xf, 0xff, 0xff, 0xff, 0xc0,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0xff, 0xc0, 0xf0, 0x3c, 0xf,
    0x3, 0xff, 0xff, 0xff, 0xff, 0x3, 0xc0, 0xf0,
    0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x0,

    /* U+0047 "G" */
    0x7, 0xf0, 0x7f, 0xf3, 0xff, 0x9f, 0x82, 0x78,
    0x3, 0xe0, 0xf, 0x0, 0x3c, 0x7f, 0xf1, 0xff,
    0xc7, 0xff, 0x3, 0xfc, 0xf, 0x78, 0x3d, 0xf0,
    0xf3, 0xff, 0xc7, 0xff, 0x7, 0xf0,

    /* U+0048 "H" */
    0xf0, 0x3f, 0xc0, 0xff, 0x3, 0xfc, 0xf, 0xf0,
    0x3f, 0xc0, 0xff, 0x3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x3, 0xfc, 0xf, 0xf0, 0x3f, 0xc0,
    0xff, 0x3, 0xfc, 0xf, 0xf0, 0x3c,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf0,

    /* U+004A "J" */
    0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf,
    0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf,
    0xf, 0xf, 0x1f, 0xfe, 0xfc, 0xf8,

    /* U+004B "K" */
    0xf0, 0x3f, 0xc1, 0xef, 0xf, 0x3c, 0x78, 0xf3,
    0xe3, 0xcf, 0xf, 0x78, 0x3f, 0xc0, 0xff, 0x83,
    0xfe, 0xf, 0xbc, 0x3c, 0x78, 0xf1, 0xe3, 0xc3,
    0xcf, 0xf, 0xbc, 0x1e, 0xf0, 0x3c,

    /* U+004C "L" */
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xf0, 0x1e, 0x3, 0xc0, 0x78,
    0xf, 0x1, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xe0,

    /* U+004D "M" */
    0xf8, 0x7, 0xff, 0x0, 0xff, 0xf0, 0x3f, 0xfe,
    0x7, 0xff, 0xc0, 0xff, 0xdc, 0x3b, 0xfb, 0x87,
    0x7f, 0x70, 0xef, 0xe7, 0x39, 0xfc, 0xe7, 0x3f,
    0x9c, 0xe7, 0xf3, 0xb8, 0xfe, 0x3f, 0x1f, 0xc7,
    0xe3, 0xf8, 0xf8, 0x7f, 0xf, 0xf, 0xe1, 0xe1,
    0xe0,

    /* U+004E "N" */
    0xf8, 0xf, 0xf0, 0x1f, 0xf0, 0x3f, 0xf0, 0x7f,
    0xe0, 0xfd, 0xe1, 0xfb, 0xc3, 0xf3, 0xc7, 0xe3,
    0xcf, 0xc7, 0x9f, 0x87, 0xbf, 0xf, 0x7e, 0xf,
    0xfc, 0x1f, 0xf8, 0x1f, 0xf0, 0x1f, 0xe0, 0x3e,

    /* U+004F "O" */
    0x7, 0xe0, 0x1f, 0xf8, 0x3f, 0xfc, 0x7c, 0x3e,
    0x78, 0x1e, 0xf0, 0xf, 0xf0, 0xf, 0xf0, 0xf,
    0xf0, 0xf, 0xf0, 0xf, 0xf0, 0xf, 0xf0, 0xf,
    0x78, 0x1e, 0x7c, 0x3e, 0x3f, 0xfc, 0x1f, 0xf8,
    0x7, 0xe0,

    /* U+0050 "P" */
    0xff, 0x8f, 0xfe, 0xff, 0xef, 0x1f, 0xf0, 0xff,
    0xf, 0xf0, 0xff, 0x1f, 0xff, 0xef, 0xfc, 0xff,
    0x8f, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0,
    0xf0, 0x0,

    /* U+0051 "Q" */
    0x7, 0xe0, 0x1f, 0xf8, 0x3f, 0xfc, 0x7c, 0x3e,
    0x78, 0x1e, 0xf0, 0xf, 0xf0, 0xf, 0xf0, 0xf,
    0xf0, 0xf, 0xf0, 0xf, 0xf0, 0xf, 0xf0, 0xf,
    0x78, 0x1e, 0x7c, 0x3e, 0x3f, 0xfc, 0x1f, 0xf8,
    0x7, 0xf0, 0x0, 0x78, 0x0, 0x7c, 0x0, 0x3e,
    0x0, 0x1f,

    /* U+0052 "R" */
    0xff, 0x83, 0xff, 0x8f, 0xfe, 0x3c, 0x7c, 0xf0,
    0xf3, 0xc3, 0xcf, 0xf, 0x3c, 0x7c, 0xff, 0xe3,
    0xff, 0xf, 0xf8, 0x3c, 0xf0, 0xf1, 0xc3, 0xc7,
    0x8f, 0xf, 0x3c, 0x1e, 0xf0, 0x78,

    /* U+0053 "S" */
    0x1f, 0x8f, 0xff, 0xff, 0x78, 0x6f, 0x1, 0xe0,
    0x3f, 0x3, 0xf8, 0x3f, 0x81, 0xf8, 0xf, 0x80,
    0xf0, 0x1f, 0x87, 0xff, 0xf7, 0xfe, 0x7f, 0x0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x1e, 0x0, 0xf0,
    0x7, 0x80, 0x3c, 0x1, 0xe0, 0xf, 0x0, 0x78,
    0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80, 0x3c,
    0x1, 0xe0, 0xf, 0x0,

    /* U+0055 "U" */
    0xf0, 0x3f, 0xc0, 0xff, 0x3, 0xfc, 0xf, 0xf0,
    0x3f, 0xc0, 0xff, 0x3, 0xfc, 0xf, 0xf0, 0x3f,
    0xc0, 0xff, 0x3, 0xfc, 0xf, 0xf0, 0x3f, 0xe1,
    0xe7, 0xff, 0x8f, 0xfc, 0xf, 0xc0,

    /* U+0056 "V" */
    0xf0, 0xe, 0x70, 0x1e, 0x70, 0x1e, 0x78, 0x1c,
    0x38, 0x3c, 0x38, 0x3c, 0x3c, 0x38, 0x1c, 0x38,
    0x1c, 0x78, 0x1e, 0x70, 0xe, 0x70, 0xe, 0xf0,
    0xf, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xc0,
    0x3, 0xc0,

    /* U+0057 "W" */
    0xf0, 0x38, 0x1f, 0xe0, 0xf8, 0x3d, 0xc1, 0xf0,
    0x7b, 0x83, 0xe0, 0xe7, 0x87, 0xe1, 0xcf, 0x1d,
    0xc7, 0x8e, 0x3b, 0x8f, 0x1c, 0x77, 0x1c, 0x3c,
    0xe7, 0x38, 0x7b, 0x8e, 0xf0, 0x77, 0x1d, 0xe0,
    0xee, 0x3b, 0x81, 0xdc, 0x37, 0x3, 0xf0, 0x7e,
    0x3, 0xe0, 0xfc, 0x7, 0xc1, 0xf0, 0xf, 0x81,
    0xe0,

    /* U+0058 "X" */
    0x78, 0x1e, 0x78, 0x1e, 0x3c, 0x3c, 0x1c, 0x38,
    0x1e, 0x78, 0xf, 0xf0, 0x7, 0xe0, 0x7, 0xe0,
    0x3, 0xc0, 0x7, 0xe0, 0xf, 0xf0, 0xe, 0xf0,
    0x1e, 0x78, 0x3c, 0x3c, 0x38, 0x3c, 0x78, 0x1e,
    0xf0, 0xf,

    /* U+0059 "Y" */
    0x78, 0x1e, 0x78, 0x1e, 0x3c, 0x3c, 0x3c, 0x3c,
    0x1e, 0x78, 0x1e, 0x78, 0xf, 0xf0, 0xf, 0xf0,
    0x7, 0xe0, 0x7, 0xc0, 0x3, 0xc0, 0x3, 0xc0,
    0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0,
    0x3, 0xc0,

    /* U+005A "Z" */
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x1, 0xe0, 0x1e,
    0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf, 0x80, 0x78,
    0x7, 0x80, 0x78, 0x3, 0xc0, 0x3c, 0x3, 0xff,
    0xff, 0xff, 0xff, 0xf8,

    /* U+005B "[" */
    0xff, 0xff, 0xf8, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8f, 0xff, 0xfc,

    /* U+005C "\\" */
    0xf0, 0x1c, 0x7, 0x1, 0xe0, 0x38, 0xe, 0x1,
    0xc0, 0x70, 0x1e, 0x3, 0x80, 0xe0, 0x3c, 0x7,
    0x1, 0xc0, 0x38, 0xe, 0x3, 0xc0,

    /* U+005D "]" */
    0xff, 0xff, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x7f, 0xff, 0xfc,

    /* U+005E "^" */
    0x6, 0x0, 0x38, 0x3, 0xc0, 0x1f, 0x1, 0xd8,
    0xc, 0xe0, 0xe3, 0x6, 0x1c, 0x70, 0x63, 0x83,
    0xb8, 0xc,

    /* U+005F "_" */
    0xff, 0xc0,

    /* U+0060 "`" */
    0xf0, 0xf0, 0xf0, 0x70,

    /* U+0061 "a" */
    0x1f, 0x87, 0xfe, 0x3f, 0xf2, 0xf, 0x0, 0xf3,
    0xff, 0x7f, 0xff, 0x8f, 0xf0, 0xff, 0x1f, 0xff,
    0xf7, 0xf7, 0x3c, 0x70,

    /* U+0062 "b" */
    0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf,
    0x78, 0xff, 0xef, 0xfe, 0xf9, 0xff, 0xf, 0xf0,
    0xff, 0xf, 0xf0, 0xff, 0xf, 0xf9, 0xff, 0xfe,
    0xff, 0xee, 0x78,

    /* U+0063 "c" */
    0x1f, 0x8f, 0xf7, 0xff, 0xe0, 0xf0, 0x3c, 0xf,
    0x3, 0xc0, 0xf0, 0x3e, 0x17, 0xfc, 0xff, 0x1f,
    0x80,

    /* U+0064 "d" */
    0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0xf1,
    0xef, 0x7f, 0xf7, 0xff, 0xf9, 0xff, 0xf, 0xf0,
    0xff, 0xf, 0xf0, 0xff, 0xf, 0xf9, 0xf7, 0xff,
    0x7f, 0xf1, 0xe7,

    /* U+0065 "e" */
    0x1f, 0x83, 0xfc, 0x7f, 0xef, 0x9f, 0xf0, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf0, 0x7, 0x82, 0x7f,
    0xe3, 0xfe, 0xf, 0xc0,

    /* U+0066 "f" */
    0xf, 0xc7, 0xf3, 0xfc, 0xf0, 0x3c, 0x1f, 0xef,
    0xfb, 0xfe, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x0,

    /* U+0067 "g" */
    0x1f, 0xfc, 0xff, 0xf7, 0xde, 0x1e, 0x3c, 0x78,
    0xf1, 0xe3, 0xc7, 0xdf, 0xf, 0xf8, 0x1f, 0x80,
    0xe0, 0x3, 0xff, 0x7, 0xfe, 0x7f, 0xff, 0xc0,
    0xfe, 0x3, 0xfc, 0x1f, 0xff, 0xf9, 0xff, 0xc1,
    0xfc, 0x0,

    /* U+0068 "h" */
    0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf,
    0x7c, 0xff, 0xef, 0xff, 0xf9, 0xff, 0xf, 0xf0,
    0xff, 0xf, 0xf0, 0xff, 0xf, 0xf0, 0xff, 0xf,
    0xf0, 0xff, 0xf,

    /* U+0069 "i" */
    0xff, 0xf0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff,

    /* U+006A "j" */
    0xf, 0xf, 0xf, 0x0, 0x0, 0xf, 0xf, 0xf,
    0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf,
    0xf, 0xf, 0xf, 0xf, 0xf, 0xff, 0xfe, 0xfc,

    /* U+006B "k" */
    0xf0, 0x7, 0x80, 0x3c, 0x1, 0xe0, 0xf, 0x0,
    0x78, 0x3f, 0xc3, 0xde, 0x3c, 0xf3, 0xc7, 0xbc,
    0x3f, 0xc1, 0xff, 0xf, 0xf8, 0x7d, 0xe3, 0xc7,
    0x9e, 0x1e, 0xf0, 0xf7, 0x83, 0xc0,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff,

    /* U+006D "m" */
    0xe7, 0xc7, 0xce, 0xfe, 0xfe, 0xff, 0xff, 0xff,
    0x9f, 0x9f, 0xf0, 0xf0, 0xff, 0xf, 0xf, 0xf0,
    0xf0, 0xff, 0xf, 0xf, 0xf0, 0xf0, 0xff, 0xf,
    0xf, 0xf0, 0xf0, 0xff, 0xf, 0xf, 0xf0, 0xf0,
    0xf0,

    /* U+006E "n" */
    0xe7, 0xce, 0xfe, 0xff, 0xff, 0x9f, 0xf0, 0xff,
    0xf, 0xf0, 0xff, 0xf, 0xf0, 0xff, 0xf, 0xf0,
    0xff, 0xf, 0xf0, 0xf0,

    /* U+006F "o" */
    0xf, 0x81, 0xff, 0x1f, 0xfc, 0xf1, 0xef, 0x7,
    0xf8, 0x3f, 0xc1, 0xfe, 0xf, 0xf0, 0x7b, 0xc7,
    0x9f, 0xfc, 0x7f, 0xc0, 0xf8, 0x0,

    /* U+0070 "p" */
    0xe7, 0x8f, 0xfe, 0xff, 0xef, 0x9f, 0xf0, 0xff,
    0xf, 0xf0, 0xff, 0xf, 0xf0, 0xff, 0x9f, 0xff,
    0xef, 0xfe, 0xf7, 0x8f, 0x0, 0xf0, 0xf, 0x0,
    0xf0, 0xf, 0x0, 0xf0, 0x0,

    /* U+0071 "q" */
    0x1e, 0x79, 0xff, 0xdf, 0xff, 0xf1, 0xff, 0x7,
    0xf8, 0x3f, 0xc1, 0xfe, 0xf, 0xf0, 0x7f, 0xc7,
    0xdf, 0xfe, 0xfe, 0xf1, 0xe7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e,

    /* U+0072 "r" */
    0xe3, 0xf7, 0xff, 0xff, 0x8f, 0x7, 0x83, 0xc1,
    0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x0,

    /* U+0073 "s" */
    0x3f, 0x1f, 0xff, 0xfb, 0xc2, 0xf0, 0x1f, 0x83,
    0xf8, 0x3f, 0x3, 0xe0, 0xff, 0xff, 0xfe, 0x7f,
    0x0,

    /* U+0074 "t" */
    0x38, 0x1c, 0xe, 0xf, 0xff, 0xff, 0xfd, 0xe0,
    0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7, 0x83, 0xfc,
    0xfe, 0x3f,

    /* U+0075 "u" */
    0xf0, 0xff, 0xf, 0xf0, 0xff, 0xf, 0xf0, 0xff,
    0xf, 0xf0, 0xff, 0xf, 0xf0, 0xff, 0x9f, 0xff,
    0xf7, 0xf7, 0x3e, 0x70,

    /* U+0076 "v" */
    0xf0, 0x39, 0xc1, 0xe7, 0x87, 0x9e, 0x1c, 0x38,
    0xf0, 0xf3, 0xc1, 0xce, 0x7, 0x78, 0x1f, 0xc0,
    0x3f, 0x0, 0xfc, 0x3, 0xe0, 0x7, 0x80,

    /* U+0077 "w" */
    0xf0, 0xf0, 0x77, 0xf, 0x8f, 0x70, 0xf8, 0xf7,
    0x9f, 0x8e, 0x39, 0xd8, 0xe3, 0x9d, 0xde, 0x39,
    0x9d, 0xc3, 0xf9, 0xdc, 0x1f, 0x8d, 0xc1, 0xf8,
    0xdc, 0x1f, 0xf, 0x80, 0xf0, 0xf8, 0xf, 0x7,
    0x80,

    /* U+0078 "x" */
    0x78, 0x79, 0xe1, 0xe3, 0xcf, 0x7, 0xf8, 0x1f,
    0xe0, 0x3f, 0x0, 0xf8, 0x3, 0xf0, 0x1f, 0xe0,
    0xf3, 0x83, 0xcf, 0x1e, 0x1e, 0xf0, 0x78,

    /* U+0079 "y" */
    0xf0, 0x3d, 0xe1, 0xe7, 0x87, 0x8e, 0x1e, 0x3c,
    0x70, 0xf3, 0xc1, 0xce, 0x7, 0xb8, 0xf, 0xe0,
    0x3f, 0x0, 0xfc, 0x1, 0xf0, 0x7, 0x80, 0x1e,
    0x0, 0x70, 0x3, 0xc0, 0x7f, 0x1, 0xf8, 0x7,
    0x80, 0x0,

    /* U+007A "z" */
    0xff, 0xff, 0xff, 0xfc, 0x1e, 0x7, 0x3, 0xc1,
    0xe0, 0xf0, 0x38, 0x1c, 0xf, 0xff, 0xff, 0xff,
    0xc0,

    /* U+007B "{" */
    0x7, 0x1f, 0x1f, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x3c, 0xf8, 0xe0, 0xf8, 0x3c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1f, 0x1f, 0x7,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff,

    /* U+007D "}" */
    0xf0, 0xf8, 0xf8, 0x38, 0x38, 0x38, 0x38, 0x38,
    0x3c, 0x1f, 0x7, 0x1f, 0x3c, 0x38, 0x38, 0x38,
    0x38, 0x38, 0xf8, 0xf8, 0xe0,

    /* U+007E "~" */
    0x7c, 0x1f, 0xff, 0xff, 0xf8, 0x3e
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 100, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 110, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 181, .box_w = 8, .box_h = 6, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 16, .adv_w = 248, .box_w = 15, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 48, .adv_w = 219, .box_w = 12, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 77, .adv_w = 346, .box_w = 20, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 288, .box_w = 18, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 102, .box_w = 3, .box_h = 6, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 162, .adv_w = 130, .box_w = 6, .box_h = 20, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 177, .adv_w = 130, .box_w = 6, .box_h = 20, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 192, .adv_w = 209, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 208, .adv_w = 219, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 225, .adv_w = 111, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 228, .adv_w = 124, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 231, .adv_w = 110, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 159, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 219, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 219, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 219, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 219, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 219, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 219, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 407, .adv_w = 219, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 219, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 219, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 219, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 110, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 111, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 528, .adv_w = 219, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 548, .adv_w = 219, .box_w = 12, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 559, .adv_w = 219, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 579, .adv_w = 183, .box_w = 11, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 603, .adv_w = 344, .box_w = 19, .box_h = 18, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 646, .adv_w = 265, .box_w = 17, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 258, .box_w = 13, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 245, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 739, .adv_w = 284, .box_w = 14, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 769, .adv_w = 215, .box_w = 10, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 791, .adv_w = 211, .box_w = 10, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 813, .adv_w = 278, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 843, .adv_w = 294, .box_w = 14, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 873, .adv_w = 127, .box_w = 4, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 882, .adv_w = 127, .box_w = 8, .box_h = 22, .ofs_x = -2, .ofs_y = -5},
    {.bitmap_index = 904, .adv_w = 255, .box_w = 14, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 934, .adv_w = 217, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 958, .adv_w = 362, .box_w = 19, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 999, .adv_w = 312, .box_w = 15, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1031, .adv_w = 306, .box_w = 16, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1065, .adv_w = 241, .box_w = 12, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 306, .box_w = 16, .box_h = 21, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1133, .adv_w = 254, .box_w = 14, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1163, .adv_w = 212, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1187, .adv_w = 222, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1215, .adv_w = 290, .box_w = 14, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1245, .adv_w = 250, .box_w = 16, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1279, .adv_w = 371, .box_w = 23, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1328, .adv_w = 256, .box_w = 16, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1362, .adv_w = 240, .box_w = 16, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1396, .adv_w = 222, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1424, .adv_w = 127, .box_w = 6, .box_h = 21, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1440, .adv_w = 159, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1462, .adv_w = 127, .box_w = 6, .box_h = 21, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1478, .adv_w = 204, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1496, .adv_w = 158, .box_w = 10, .box_h = 1, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1498, .adv_w = 233, .box_w = 7, .box_h = 4, .ofs_x = 4, .ofs_y = 14},
    {.bitmap_index = 1502, .adv_w = 232, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1522, .adv_w = 243, .box_w = 12, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1549, .adv_w = 197, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1566, .adv_w = 243, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1593, .adv_w = 227, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1613, .adv_w = 149, .box_w = 10, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1636, .adv_w = 217, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 1670, .adv_w = 252, .box_w = 12, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1697, .adv_w = 117, .box_w = 4, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1706, .adv_w = 117, .box_w = 8, .box_h = 24, .ofs_x = -2, .ofs_y = -6},
    {.bitmap_index = 1730, .adv_w = 238, .box_w = 13, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1760, .adv_w = 117, .box_w = 4, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1769, .adv_w = 377, .box_w = 20, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1802, .adv_w = 252, .box_w = 12, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1822, .adv_w = 238, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1844, .adv_w = 243, .box_w = 12, .box_h = 19, .ofs_x = 2, .ofs_y = -6},
    {.bitmap_index = 1873, .adv_w = 243, .box_w = 13, .box_h = 19, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 1904, .adv_w = 174, .box_w = 9, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1919, .adv_w = 191, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1936, .adv_w = 167, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1954, .adv_w = 252, .box_w = 12, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1974, .adv_w = 218, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1997, .adv_w = 329, .box_w = 20, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2030, .adv_w = 222, .box_w = 14, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2053, .adv_w = 218, .box_w = 14, .box_h = 19, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 2087, .adv_w = 187, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2104, .adv_w = 151, .box_w = 8, .box_h = 21, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2125, .adv_w = 212, .box_w = 3, .box_h = 24, .ofs_x = 5, .ofs_y = -6},
    {.bitmap_index = 2134, .adv_w = 151, .box_w = 8, .box_h = 21, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2155, .adv_w = 219, .box_w = 12, .box_h = 4, .ofs_x = 1, .ofs_y = 6}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_OpenSansBold24 = {
#else
lv_font_t ui_font_OpenSansBold24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 24,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_OPENSANSBOLD24*/

