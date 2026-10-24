#include "m2c.h"

typedef struct {
    u8 pad0[8];
    u32 a : 8;
    u32 b : 24;
    u8 pad1[8];
    u16 p2 : 1;
    u16 c : 8;
} S4210;
typedef struct {
    u8 pad0[8];
    u32 a : 8;
} S5128;
typedef struct {
    u32 w0;
    u32 a : 16;
    u32 b : 8;
    u32 c : 1;
} S4228;
typedef struct {
    u8 pad[0xa10];
    u32 w : 16;
    u32 z : 16;
    u32 e0 : 8;
    u32 e1 : 8;
    u32 e2 : 3;
    u32 g : 2;
} S46dc;
typedef struct {
    u16 w0;
    u16 p : 1;
    u16 f : 8;
} S42d4;

extern S4210 data_ov120_020f4210;
extern S4228 data_ov120_020f4228;
extern S42d4 data_ov120_020f42d4;
extern S46dc data_ov120_020f46dc;
extern S5128 data_ov120_020f5128;

s32 func_ov120_020ed6ac(u32 arg0) {
    switch (arg0) {
        case 7:
        case 8:
            if (arg0 == data_ov120_020f4210.a) {
                return 1;
            }
            break;
        case 10:
        case 11:
            if (arg0 == data_ov120_020f5128.a) {
                return 1;
            }
            break;
        case 19:
        case 20:
            if (arg0 == data_ov120_020f4228.a) {
                return 1;
            }
            break;
        case 21:
            if (arg0 == data_ov120_020f4228.b) {
                return 1;
            }
            break;
        case 0:
            if ((u32) (data_ov120_020f46dc.w - 1) <= 1) {
                return 1;
            }
            break;
        case 1:
            if (data_ov120_020f46dc.w == 4) {
                return 1;
            }
            break;
        case 2:
            if (data_ov120_020f46dc.w == 8) {
                return 1;
            }
            break;
        case 3:
            if (data_ov120_020f46dc.w == 0x10) {
                return 1;
            }
            break;
        case 4:
            if (data_ov120_020f46dc.w == 0x20) {
                return 1;
            }
            break;
        case 6:
            if (data_ov120_020f4228.c != 0) {
                return 1;
            }
            break;
        case 22:
        case 30:
            if (data_ov120_020f46dc.g == 1) {
                return 1;
            }
            break;
        case 23:
        case 31:
            if (data_ov120_020f46dc.g == 2) {
                return 1;
            }
            break;
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
            if (arg0 == data_ov120_020f4210.c) {
                return 1;
            }
            break;
        case 15:
        case 16:
        case 17:
        case 18:
            if (arg0 == data_ov120_020f42d4.f) {
                return 1;
            }
            break;
        case 32:
        case 33:
        case 34:
            if (arg0 == data_ov120_020f46dc.e1) {
                return 1;
            }
            break;
    }
    return 0;
}
