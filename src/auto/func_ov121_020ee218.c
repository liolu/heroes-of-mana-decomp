#include "m2c.h"

typedef struct {
    u32 pad0 : 2;
    u32 f2 : 1;
    u32 f3 : 1;
    u32 r4 : 4;
    u32 mid : 8;
    u32 rest : 16;
    u8 pad4[9];
    u8 b0d;
    u8 pad0e[6];
    u32 w14 : 8;
    u32 w14r : 24;
} S0;

typedef struct {
    u32 lo : 16;
    u32 f16 : 1;
    u32 f17 : 1;
    u32 f18 : 1;
    u32 rest : 13;
} Fl;

typedef struct {
    u32 w0;
    u32 lo : 16;
    u32 f16 : 1;
    u32 f17 : 1;
    u32 f18 : 1;
    u32 rest : 13;
} Fl4;

typedef struct {
    u8 pad[0xa48];
    u32 pre : 28;
    u32 f : 2;
    u32 post : 2;
} S2;

extern S0 data_ov121_020f6608;
extern Fl4 data_ov121_020f5cac;
extern Fl data_ov121_020f5bd4;
extern Fl data_ov121_020f5c64;
extern Fl data_ov121_020f5b8c;
extern Fl data_ov121_020f5c1c;
extern Fl data_ov121_020f5b88;
extern S2 data_ov121_020f6d60;
extern s32 data_ov121_020f5b80;

s32 func_ov121_020ee218(u32 arg0) {
    switch (arg0) {
        case 3:
            if (data_ov121_020f6608.f2) {
                return 1;
            }
            break;
        case 4:
            if (data_ov121_020f6608.f3) {
                return 1;
            }
            break;
        case 0:
        case 1:
            if (arg0 == data_ov121_020f6608.w14) {
                return 1;
            }
            break;
        case 5:
        case 6:
        case 7:
            if (arg0 - 5 + data_ov121_020f6608.b0d == data_ov121_020f6608.mid) {
                return 1;
            }
            break;
        case 12:
            if (data_ov121_020f5cac.f17) {
                return 1;
            }
            break;
        case 15:
            if (data_ov121_020f5cac.f16) {
                return 1;
            }
            break;
        case 13:
        case 14:
            if (arg0 == data_ov121_020f5cac.lo) {
                return 1;
            }
            break;
        case 16:
            if (data_ov121_020f5bd4.f18) {
                return 1;
            }
            break;
        case 19:
            if (data_ov121_020f5bd4.f17) {
                return 1;
            }
            break;
        case 17:
        case 18:
            if (arg0 == data_ov121_020f5bd4.lo) {
                return 1;
            }
            break;
        case 20:
            if (data_ov121_020f5c64.f18) {
                return 1;
            }
            break;
        case 23:
            if (data_ov121_020f5c64.f17) {
                return 1;
            }
            break;
        case 21:
        case 22:
            if (arg0 == data_ov121_020f5c64.lo) {
                return 1;
            }
            break;
        case 24:
            if (data_ov121_020f5b8c.f18) {
                return 1;
            }
            break;
        case 27:
            if (data_ov121_020f5b8c.f17) {
                return 1;
            }
            break;
        case 25:
        case 26:
            if (arg0 == data_ov121_020f5b8c.lo) {
                return 1;
            }
            break;
        case 28:
            if (data_ov121_020f5c1c.f18) {
                return 1;
            }
            break;
        case 31:
            if (data_ov121_020f5c1c.f17) {
                return 1;
            }
            break;
        case 29:
        case 30:
            if (arg0 == data_ov121_020f5c1c.lo) {
                return 1;
            }
            break;
        case 32:
            if (data_ov121_020f5b88.f17) {
                return 1;
            }
            break;
        case 34:
            if (data_ov121_020f5b88.f18) {
                return 1;
            }
            break;
        case 36:
            if (data_ov121_020f6d60.f == 1) {
                return 1;
            }
            break;
        case 37:
            if (data_ov121_020f6d60.f == 2) {
                return 1;
            }
            break;
        case 42:
        case 43:
        case 44:
        case 45:
            if (data_ov121_020f5b80 == arg0) {
                return 1;
            }
            break;
        case 39:
        case 40:
        case 41:
            if (data_ov121_020f5b80 == arg0) {
                return 1;
            }
            break;
    }
    return 0;
}
