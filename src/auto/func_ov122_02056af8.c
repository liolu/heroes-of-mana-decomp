#include "m2c.h"

typedef struct G {
    u8 pad[0xdd4];
    u32 f_dd4;
    u32 pad_dd8 : 24;
    u32 hi : 8;
    u32 lo : 8;
    u32 pad_ddc : 21;
    u32 b29 : 1;
    u32 b30 : 1;
    u32 b31 : 1;
    u32 pad_de0 : 4;
    u32 b4 : 1;
    u32 pad_de0b : 27;
    u32 f_de4;
    u32 f_de8;
} G;

typedef struct A {
    u32 p0;
    u32 w4;
} A;

typedef struct B {
    u8 pad[0x424];
    u32 w : 8;
    u32 wr : 24;
} B;

typedef struct C {
    u8 pad[0x794];
    u32 w : 8;
    u32 wr : 24;
} C;

extern G data_ov122_02065604;
extern A data_ov122_02062b24;
extern B data_ov122_02062cb0;
extern C data_ov122_02064020;
extern C data_ov122_02063880;
extern C data_ov122_020630e0;

s32 func_ov122_02056af8(s32 k) {
    switch (k) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
            if (k == data_ov122_02065604.hi) {
                return 1;
            }
            break;
        case 4:
        case 5:
            if (data_ov122_02065604.b29) {
                return 1;
            }
            break;
        case 8:
        case 9:
        case 10:
        case 11:
            if (data_ov122_02065604.b30) {
                return 1;
            }
            break;
        case 12:
        case 13:
        case 14:
        case 15:
            if (k == data_ov122_02065604.lo) {
                return 1;
            }
            break;
        case 16:
            if (data_ov122_02065604.b31) {
                return 1;
            }
            break;
        case 18:
            if (data_ov122_02065604.b4) {
                return 1;
            }
            break;
        case 19:
            if (data_ov122_02065604.f_de4 != 0) {
                return 1;
            }
            break;
        case 17:
        case 22:
        case 26:
        case 27:
            if (data_ov122_02065604.f_de8 != 0) {
                return 1;
            }
            break;
        case 20:
        case 21:
            if (k == (u16) data_ov122_02062b24.w4) {
                return 1;
            }
            break;
        case 23:
        case 24:
            if (k == data_ov122_02062cb0.w) {
                return 1;
            }
            break;
        case 31:
        case 32:
            if (k == data_ov122_02064020.w) {
                return 1;
            }
            break;
        case 38:
        case 39:
            if (k == data_ov122_02063880.w) {
                return 1;
            }
            break;
        case 44:
        case 45:
            if (k == data_ov122_020630e0.w) {
                return 1;
            }
            break;
        case 28:
            if (data_ov122_02065604.f_dd4 == 0x8000) {
                return 1;
            }
            break;
        case 29:
            if (data_ov122_02065604.f_dd4 == 0x10000) {
                return 1;
            }
            if (data_ov122_02065604.f_dd4 == 0x20000) {
                return 1;
            }
            break;
        case 30:
            if (data_ov122_02065604.f_dd4 == 0x40000) {
                return 1;
            }
            if (data_ov122_02065604.f_dd4 == 0x80000) {
                return 1;
            }
            break;
    }
    return 0;
}
