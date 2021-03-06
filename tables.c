#include "proto.h"

const unsigned short item_map_2_to_3[] = {
  //         0      1      2      3      4      5      6      7      8      9      A      B      C      D      E      F
  /* 00 */     0,   0x1,   0x2,  0xB3,   0x3,   0x4,     0, 0x168,  0x5E,   0xE,   0xF,  0x10,  0x11,  0x12,  0x13,  0x14,
  /* 10 */  0x15,  0x16,   0xD,  0x55,  0x56,  0x25,  0x60,  0x5F,  0x61,     0,  0x3F,  0x40,  0x41,  0x42,  0xDE,  0x43,
  /* 20 */  0x44,  0x4E,  0x62,  0xDF,  0x6E,  0x50,  0x17,  0x18,  0x19,  0x49,  0x53,  0x54,  0x4A,     0,  0x1A,  0x1B,
  /* 30 */  0x1C,  0x4B,     0,  0x4C,  0x4D,  0x4F, 0x104, 0x105,     0,  0xB6, 0x106, 0x107,     0, 0x108,  0x45,  0x22,
  /* 40 */  0x23,  0x24,     0,     0, 0x109,     0,     0, 0x172,  0x1D,  0xB7,  0x87,     0,  0xCB,  0xD2,  0x85,  0x89,
  /* 50 */  0x88,  0xD3,  0xBB,  0x8C,  0x86,   0x8,  0x67,  0x68,  0xBC,   0x6,     0,  0xBD,   0xC,   0xB,  0xBE,  0xD1,
  /* 60 */  0xD6,   0xC,  0xCF,   0xC,     0,   0xC,  0xCE,     0,  0xD9,  0xE1,  0xC2,  0xD4,  0xD0,  0x8D,  0x6A,  0x6B,
  /* 70 */  0xC3,  0xD5,     0,     0,     0,  0xCD,  0xE0,  0xC4,     0,  0x1E,  0x1F,  0x20,  0x21,  0xCC,  0xC5, 0x163,
  /* 80 */     0,     0,     0,  0x6C,  0x6D,     0,     0,     0,     0,     0,  0xD7,  0x2C,  0xC6,     0,     0,  0xC7,
  /* 90 */  0xD8,     0,  0xC8,     0,     0,     0,  0x8A,  0xC9,     0,     0,     0,     0,  0x2D,   0xC,  0x83,   0x8,
  /* A0 */   0x6,   0xC,     0,  0xCA,   0xB,   0xC,   0xC,     0,     0,  0x5D,  0xD9,     0,  0xDA,  0x8B,  0x8E, 0x10C,
  /* B0 */     0,   0x5, 0x172,     0,     0,  0x7A,  0x7E,  0x84,  0x82,  0x7F,  0x80,  0x79,  0x81,  0x7B,     0, 0x121,
  /* C0 */ 0x122, 0x123, 0x124,     0, 0x125, 0x126, 0x127, 0x128, 0x129, 0x12A, 0x12B, 0x12C, 0x12D, 0x12E, 0x12F, 0x130,
  /* D0 */ 0x131, 0x132, 0x133, 0x134, 0x135, 0x136, 0x137, 0x138, 0x139, 0x13A, 0x13B, 0x13C,     0, 0x13D, 0x13E, 0x13F,
  /* E0 */ 0x140, 0x141, 0x142, 0x143, 0x144, 0x145, 0x146, 0x147, 0x148, 0x149, 0x14A, 0x14B, 0x14C, 0x14D, 0x14E, 0x14F,
  /* F0 */ 0x150, 0x151, 0x152, 0x153, 0x154, 0x155, 0x156, 0x157, 0x158, 0x159, 0x15A,     0,     0,     0,     0,     0
};

// all ratios in number of females out of 8; 9 = genderless species
const unsigned char gender_ratio[] = {
  //       0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F 10 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F
  /* 00 */ 9, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 8, 8, 8,
  /* 20 */ 0, 0, 0, 6, 6, 6, 6, 6, 6, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 2, 4, 4, 4, 2,
  /* 40 */ 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 9, 9, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  /* 60 */ 4, 4, 4, 4, 9, 9, 4, 4, 4, 4, 0, 0, 4, 4, 4, 4, 4, 8, 4, 8, 4, 4, 4, 4, 9, 9, 4, 4, 8, 2, 2, 4,
  /* 80 */ 0, 4, 4, 4, 9, 1, 1, 1, 1, 9, 1, 1, 1, 1, 1, 1, 9, 9, 9, 4, 4, 4, 9, 9, 1, 1, 1, 1, 1, 1, 1, 1,
  /* A0 */ 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 6, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  /* C0 */ 4, 4, 4, 4, 1, 1, 4, 4, 4, 9, 4, 4, 4, 4, 4, 4, 4, 6, 6, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 4,
  /* E0 */ 4, 4, 4, 4, 4, 4, 4, 4, 4, 9, 4, 4, 0, 0, 8, 2, 2, 8, 8, 9, 9, 9, 4, 4, 4, 9, 9, 9, 9, 9, 9, 9
};

#define X INVALID_CHARACTER
#define END STRING_TERMINATOR

const unsigned char character_map_2_to_3[] = {
  //        0     1     2     3     4     5     6     7     8     9     A     B     C     D     E     F
  /* 00 */    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,
  /* 10 */    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,
  /* 20 */    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,
  /* 30 */    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,
  /* 40 */    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,
  /* 50 */  END,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,
  /* 60 */    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,
  /* 70 */    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X, 0x00,
  /* 80 */ 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA,
  /* 90 */ 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x5C, 0x5D, 0xF0, 0x36, 0x85, 0x86,
  /* A0 */ 0xD5, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF, 0xE0, 0xE1, 0xE2, 0xE3, 0xE4,
  /* B0 */ 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE,    X,    X,    X,    X,    X,    X,
  /* C0 */ 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6,    X,    X,    X,    X,    X,    X,    X,    X,    X,    X,
  /* D0 */ 0xD8, 0xE0, 0xE1, 0xE6, 0xE7, 0xE8, 0xEA,    X,    X,    X,    X,    X,    X,    X,    X, 0x7B,
  /* E0 */ 0xB4, 0x53, 0x54, 0xAE,    X,    X, 0xAC, 0xAB, 0xAD, 0x2D, 0x1B, 0x7C, 0x7C, 0xEF, 0x7A, 0xB5,
  /* F0 */ 0xB7, 0xB9, 0xAD, 0xBA, 0xB8, 0xB5, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA
};
