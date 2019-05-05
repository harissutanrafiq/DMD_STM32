/*
 *
 * System5x7
 *
 *
 * File Name           : System5x7.h
 * Date                : 28 Oct 2008
 * Font size in bytes  : 470
 * Font width          : 5
 * Font height         : 7
 * Font first char     : 32
 * Font last char      : 127
 * Font used chars     : 94
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef SYSTEM5x7_H
#define SYSTEM5x7_H

#define SYSTEM5x7_WIDTH 5
#define SYSTEM5x7_HEIGHT 7

/*
 * added to allow fontname to match header file name. 
 * as well as keep the old name for backward compability
 */

#define UkrRusSystemFont5x7 System5x7

const static uint8_t System5x7[] PROGMEM = {
    0x0, 0x0, // size of zero indicates fixed width font, actual length is width * height
    0x05, // width
    0x07, // height
    0x20, // first char
    0xA6, // char count
    
    // Fixed width; char width table not used !!!!
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00,// (space)
	0x00, 0x00, 0x5F, 0x00, 0x00,// !
	0x00, 0x07, 0x00, 0x07, 0x00,// "
	0x14, 0x7F, 0x14, 0x7F, 0x14,// #
	0x24, 0x2A, 0x7F, 0x2A, 0x12,// $
	0x23, 0x13, 0x08, 0x64, 0x62,// %
	0x36, 0x49, 0x55, 0x22, 0x50,// &
	0x00, 0x05, 0x03, 0x00, 0x00,// '
	0x00, 0x1C, 0x22, 0x41, 0x00,// (
	0x00, 0x41, 0x22, 0x1C, 0x00,// )
	0x08, 0x2A, 0x1C, 0x2A, 0x08,// *
	0x08, 0x08, 0x3E, 0x08, 0x08,// +
	0x00, 0x50, 0x30, 0x00, 0x00,// ,
	0x08, 0x08, 0x08, 0x08, 0x08,// -
	0x00, 0x60, 0x60, 0x00, 0x00,// .
	0x20, 0x10, 0x08, 0x04, 0x02,// /
	0x3E, 0x51, 0x49, 0x45, 0x3E,// 0
	0x00, 0x42, 0x7F, 0x40, 0x00,// 1
	0x42, 0x61, 0x51, 0x49, 0x46,// 2
	0x21, 0x41, 0x45, 0x4B, 0x31,// 3
	0x18, 0x14, 0x12, 0x7F, 0x10,// 4
	0x27, 0x45, 0x45, 0x45, 0x39,// 5
	0x3C, 0x4A, 0x49, 0x49, 0x30,// 6
	0x01, 0x71, 0x09, 0x05, 0x03,// 7
	0x36, 0x49, 0x49, 0x49, 0x36,// 8
	0x06, 0x49, 0x49, 0x29, 0x1E,// 9
	0x00, 0x36, 0x36, 0x00, 0x00,// :
	0x00, 0x56, 0x36, 0x00, 0x00,// ;
	0x00, 0x08, 0x14, 0x22, 0x41,// <
	0x14, 0x14, 0x14, 0x14, 0x14,// =
	0x41, 0x22, 0x14, 0x08, 0x00,// >
	0x02, 0x01, 0x51, 0x09, 0x06,// ?
	0x32, 0x49, 0x79, 0x41, 0x3E,// @
	0x7E, 0x11, 0x11, 0x11, 0x7E,// A
	0x7F, 0x49, 0x49, 0x49, 0x36,// B
	0x3E, 0x41, 0x41, 0x41, 0x22,// C
	0x7F, 0x41, 0x41, 0x22, 0x1C,// D
	0x7F, 0x49, 0x49, 0x49, 0x41,// E
	0x7F, 0x09, 0x09, 0x01, 0x01,// F
	0x3E, 0x41, 0x41, 0x51, 0x32,// G
	0x7F, 0x08, 0x08, 0x08, 0x7F,// H
	0x00, 0x41, 0x7F, 0x41, 0x00,// I
	0x20, 0x40, 0x41, 0x3F, 0x01,// J
	0x7F, 0x08, 0x14, 0x22, 0x41,// K
	0x7F, 0x40, 0x40, 0x40, 0x40,// L
	0x7F, 0x02, 0x04, 0x02, 0x7F,// M
	0x7F, 0x04, 0x08, 0x10, 0x7F,// N
	0x3E, 0x41, 0x41, 0x41, 0x3E,// O
	0x7F, 0x09, 0x09, 0x09, 0x06,// P
	0x3E, 0x41, 0x51, 0x21, 0x5E,// Q
	0x7F, 0x09, 0x19, 0x29, 0x46,// R
	0x46, 0x49, 0x49, 0x49, 0x31,// S
	0x01, 0x01, 0x7F, 0x01, 0x01,// T
	0x3F, 0x40, 0x40, 0x40, 0x3F,// U
	0x1F, 0x20, 0x40, 0x20, 0x1F,// V
	0x7F, 0x20, 0x18, 0x20, 0x7F,// W
	0x63, 0x14, 0x08, 0x14, 0x63,// X
	0x03, 0x04, 0x78, 0x04, 0x03,// Y
	0x61, 0x51, 0x49, 0x45, 0x43,// Z
	0x00, 0x00, 0x7F, 0x41, 0x41,// [
	0x02, 0x04, 0x08, 0x10, 0x20,// "\"
	0x41, 0x41, 0x7F, 0x00, 0x00,// ]
	0x04, 0x02, 0x01, 0x02, 0x04,// ^
	0x40, 0x40, 0x40, 0x40, 0x40,// _
	0x00, 0x01, 0x02, 0x04, 0x00,// `
	0x20, 0x54, 0x54, 0x54, 0x78,// a
	0x7F, 0x48, 0x44, 0x44, 0x38,// b
	0x38, 0x44, 0x44, 0x44, 0x20,// c
	0x38, 0x44, 0x44, 0x48, 0x7F,// d
	0x38, 0x54, 0x54, 0x54, 0x18,// e
	0x08, 0x7E, 0x09, 0x01, 0x02,// f
	0x08, 0x14, 0x54, 0x54, 0x3C,// g
	0x7F, 0x08, 0x04, 0x04, 0x78,// h
	0x00, 0x44, 0x7D, 0x40, 0x00,// i
	0x20, 0x40, 0x44, 0x3D, 0x00,// j
	0x00, 0x7F, 0x10, 0x28, 0x44,// k
	0x00, 0x41, 0x7F, 0x40, 0x00,// l
	0x7C, 0x04, 0x18, 0x04, 0x78,// m
	0x7C, 0x08, 0x04, 0x04, 0x78,// n
	0x38, 0x44, 0x44, 0x44, 0x38,// o
	0x7C, 0x14, 0x14, 0x14, 0x08,// p
	0x08, 0x14, 0x14, 0x18, 0x7C,// q
	0x7C, 0x08, 0x04, 0x04, 0x08,// r
	0x48, 0x54, 0x54, 0x54, 0x20,// s
	0x04, 0x3F, 0x44, 0x40, 0x20,// t
	0x3C, 0x40, 0x40, 0x20, 0x7C,// u
	0x1C, 0x20, 0x40, 0x20, 0x1C,// v
	0x3C, 0x40, 0x30, 0x40, 0x3C,// w
	0x44, 0x28, 0x10, 0x28, 0x44,// x
	0x0C, 0x50, 0x50, 0x50, 0x3C,// y
	0x44, 0x64, 0x54, 0x4C, 0x44,// z
	0x00, 0x08, 0x36, 0x41, 0x00,// {
	0x00, 0x00, 0x7F, 0x00, 0x00,// |
	0x00, 0x41, 0x36, 0x08, 0x00,// }
	0x08, 0x08, 0x2A, 0x1C, 0x08,// ->
	0x08, 0x1C, 0x2A, 0x08, 0x08, // <-
	// Вставлено
      	0x7C, 0x14, 0x14, 0x14, 0x08,//p 	0x80
      	0x38, 0x44, 0x44, 0x44, 0x20,//c	0x81
      	0x04, 0x04, 0x7c, 0x04, 0x04,//т	0x82
      	0x0C, 0x50, 0x50, 0x50, 0x3C,//у	0x83
      	0x30, 0x48, 0xfc, 0x48, 0x30,//ф	0x84
      	0x44, 0x28, 0x10, 0x28, 0x44,//x	0x85
      	0x7c, 0x40, 0x40, 0x40, 0xfc,//ц	0x86
      	0x0c, 0x10, 0x10, 0x10, 0x7c,//ч	0x87
      	0x7c, 0x40, 0x7c, 0x40, 0x7c,//ш	0x88
      	0x7c, 0x40, 0x7c, 0x40, 0xfc,//щ	0x89
      	0x04, 0x7c, 0x50, 0x50, 0x20,//ъ	0x8A
      	0x7c, 0x50, 0x50, 0x20, 0x7c,//ы	0x8B
      	0x7c, 0x50, 0x50, 0x20, 0x00,//ь	0x8C
      	0x28, 0x44, 0x54, 0x54, 0x38,//э	0x8D
      	0x7c, 0x10, 0x38, 0x44, 0x38,//ю	0x8E
      	0x08, 0x54, 0x34, 0x14, 0x7c,//я	0x8F
      // -------------------------------------------------	
      	0x7e, 0x11, 0x11, 0x11, 0x7e,//A	0x90
      	0x7f, 0x49, 0x49, 0x49, 0x33,//Б	0x91
      	0x7f, 0x49, 0x49, 0x49, 0x36,//В	0x92
      	0x7f, 0x01, 0x01, 0x01, 0x03,//Г	0x93
      	0xe0, 0x51, 0x4f, 0x41, 0xff,//Д	0x94
      	0x7f, 0x49, 0x49, 0x49, 0x41,//E	0x95
      	0x77, 0x08, 0x7f, 0x08, 0x77,//Ж	0x96
      	0x41, 0x49, 0x49, 0x49, 0x36,//З	0x97
      	0x7f, 0x10, 0x08, 0x04, 0x7f,//И	0x98
      	0x7c, 0x21, 0x12, 0x09, 0x7c,//Й	0x99
      	0x7f, 0x08, 0x14, 0x22, 0x41,//K	0x9A
      	0x20, 0x41, 0x3f, 0x01, 0x7f,//Л	0x9B
      	0x7f, 0x02, 0x0c, 0x02, 0x7f,//M	0x9C
      	0x7f, 0x08, 0x08, 0x08, 0x7f,//H	0x9D
      	0x3e, 0x41, 0x41, 0x41, 0x3e,//O	0x9E
      	0x7f, 0x01, 0x01, 0x01, 0x7f,//П	0x9F
      // -------------------------------------------------	
      	0x7f, 0x09, 0x09, 0x09, 0x06,//P	0xA0
      	0x3e, 0x41, 0x41, 0x41, 0x22,//C	0xA1
      	0x01, 0x01, 0x7f, 0x01, 0x01,//T	0xA2
      	0x47, 0x28, 0x10, 0x08, 0x07,//У	0xA3
      	0x1c, 0x22, 0x7f, 0x22, 0x1c,//Ф	0xA4
      	0x63, 0x14, 0x08, 0x14, 0x63,//X	0xA5
      	0x7f, 0x40, 0x40, 0x40, 0xff,//Ц	0xA6
      	0x07, 0x08, 0x08, 0x08, 0x7f,//Ч	0xA7
      	0x7f, 0x40, 0x7f, 0x40, 0x7f,//Ш	0xA8
      	0x7f, 0x40, 0x7f, 0x40, 0xff,//Щ	0xA9
      	0x01, 0x7f, 0x48, 0x48, 0x30,//Ъ	0xAA
      	0x7f, 0x48, 0x30, 0x00, 0x7f,//Ы	0xAB
      	0x00, 0x7f, 0x48, 0x48, 0x30,//Ь	0xAC
      	0x22, 0x41, 0x49, 0x49, 0x3e,//Э	0xAD
      	0x7f, 0x08, 0x3e, 0x41, 0x3e,//Ю	0xAE
      	0x46, 0x29, 0x19, 0x09, 0x7f,//Я	0xAF
      // -------------------------------------------------
       	0x20, 0x54, 0x54, 0x54, 0x78,//a	0xB0
      	0x3c, 0x4a, 0x4a, 0x49, 0x31,//б	0xB1
      	0x7c, 0x54, 0x54, 0x28, 0x00,//в	0xB2
      	0x7c, 0x04, 0x04, 0x04, 0x0c,//г	0xB3
      	0xe0, 0x54, 0x4c, 0x44, 0xfc,//д	0xB4
      	0x38, 0x54, 0x54, 0x54, 0x18,//e	0xB5
      	0x6c, 0x10, 0x7c, 0x10, 0x6c,//ж	0xB6
      	0x44, 0x44, 0x54, 0x54, 0x28,//з	0xB7
      	0x7c, 0x20, 0x10, 0x08, 0x7c,//и	0xB8
      	0x7c, 0x41, 0x22, 0x11, 0x7c,//й	0xB9
      	0x7c, 0x10, 0x28, 0x44, 0x00,//к	0xBA
      	0x20, 0x44, 0x3c, 0x04, 0x7c,//л	0xBB
      	0x7c, 0x08, 0x10, 0x08, 0x7c,//м	0xBC
      	0x7c, 0x10, 0x10, 0x10, 0x7c,//н	0xBD
      	0x38, 0x44, 0x44, 0x44, 0x38,//o	0xBE
      	0x7c, 0x04, 0x04, 0x04, 0x7c, //п	0xBF
    	0x3E, 0x49, 0x49, 0x41, 0x22, //Є    0xC0
    	0x00, 0x41, 0x7F, 0x41, 0x00, //I    0xC1
    	0x00, 0x41, 0x7E, 0x41, 0x00, //Ї    0xC2
    	0x38, 0x54, 0x54, 0x44, 0x28, //є    0xC3
    	0x00, 0x48, 0x7A, 0x40, 0b0,  //і    0xC4
    	0x00, 0x4A, 0x78, 0x42, 0x00 //ї    0xC5	
    
};

#endif
