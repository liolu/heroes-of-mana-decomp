#include "m2c.h"

typedef struct {
    u32 lo : 8;
    u32 mid : 16;
    u32 b : 3;
    u32 top : 5;
} WA;
typedef struct {
    u32 f : 8;
    u32 r : 24;
} WB;
typedef struct {
    u16 f : 8;
    u16 r : 8;
} HB;
typedef struct {
    u16 a : 1;
    u16 f : 8;
    u16 r : 7;
} HC;

extern struct {
    u8 pad[0xab0];
    WA w;
} data_ov117_020f23e0;
extern struct {
    u8 pad[0x114];
    WB w;
} data_ov117_020f0fc4;
extern struct {
    u8 pad[0x654];
    WB w;
} data_ov117_020f1d7c;
extern struct {
    u8 pad[0x8];
    WB w;
} data_ov117_020f10e8;
extern struct {
    u8 pad[0x654];
    WB w;
} data_ov117_020f1718;
extern struct {
    u8 pad[0x8];
    WB w;
} data_ov117_020f0f18;
extern struct {
    u8 pad[0xf14];
    WB w;
} data_ov117_020f2e94;
extern struct {
    u8 pad[0xc];
    WB w;
} data_ov117_020f0ee8;
extern struct {
    u8 pad[0x8];
    WB w;
    u8 pad2[0xa];
    HC h;
} data_ov117_020f0f00;
extern struct {
    u8 pad[0x62];
    HB w;
} data_ov117_020f237c;
extern struct {
    u8 pad[0x62];
    HB w;
} data_ov117_020f1d18;
extern struct {
    u8 pad[0x22];
    HB w;
} data_ov117_020f3d94;
extern struct {
    u8 pad[0x2];
    HC w;
} data_ov117_020f1310;

s32 func_ov117_020e57a4(s32 a) {
    switch (a) {
        case 0: {
            u32 v = data_ov117_020f23e0.w.mid;
            if (v == 7) {
                return 1;
            }
            if (v == 1) {
                return 1;
            }
            if (v == 2) {
                return 1;
            }
            if (v == 4) {
                return 1;
            }
            break;
        }
        case 1: {
            u32 v = data_ov117_020f23e0.w.mid;
            if (v == 8) {
                return 1;
            }
            if (v == 0x10) {
                return 1;
            }
            break;
        }
        case 2: {
            u32 v = data_ov117_020f23e0.w.mid;
            if (v == 0x20) {
                return 1;
            }
            if (v == 0x40) {
                return 1;
            }
            break;
        }
        case 3: {
            u32 v = data_ov117_020f23e0.w.mid;
            if (v == 0x80) {
                return 1;
            }
            if (v == 0x100) {
                return 1;
            }
            break;
        }
        case 4:
            return data_ov117_020f23e0.w.top;
        case 8:
        case 9:
            if (a == data_ov117_020f0fc4.w.f) {
                return 1;
            }
            break;
        case 41:
        case 42:
            if (a == data_ov117_020f1d7c.w.f) {
                return 1;
            }
            break;
        case 44:
        case 45:
            if (a == data_ov117_020f10e8.w.f) {
                return 1;
            }
            break;
        case 56:
        case 57:
            if (a == data_ov117_020f1718.w.f) {
                return 1;
            }
            break;
        case 59:
        case 60:
            if (a == data_ov117_020f0f18.w.f) {
                return 1;
            }
            break;
        case 71:
        case 72:
            if (a == data_ov117_020f2e94.w.f) {
                return 1;
            }
            break;
        case 19:
        case 20:
            if (a == data_ov117_020f0ee8.w.f) {
                return 1;
            }
            break;
        case 38:
        case 39:
            if (a == data_ov117_020f0f00.w.f) {
                return 1;
            }
            break;
        case 53:
            if (data_ov117_020f237c.w.f == 0) {
                return 1;
            }
            break;
        case 54:
            if (data_ov117_020f237c.w.f == 1) {
                return 1;
            }
            break;
        case 55:
            if (data_ov117_020f237c.w.f == 2) {
                return 1;
            }
            break;
        case 68:
            if (data_ov117_020f1d18.w.f == 3) {
                return 1;
            }
            break;
        case 69:
            if (data_ov117_020f1d18.w.f == 4) {
                return 1;
            }
            break;
        case 70:
            if (data_ov117_020f1d18.w.f == 5) {
                return 1;
            }
            break;
        case 80:
            if (data_ov117_020f3d94.w.f == 6) {
                return 1;
            }
            break;
        case 81:
            if (data_ov117_020f3d94.w.f == 7) {
                return 1;
            }
            break;
        case 82:
            if (data_ov117_020f3d94.w.f == 8) {
                return 1;
            }
            break;
        case 34:
        case 35:
        case 36:
        case 37:
            if (a == data_ov117_020f1310.w.f) {
                return 1;
            }
            break;
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 100:
            if (a == data_ov117_020f0f00.h.f) {
                return 1;
            }
            break;
    }
    return 0;
}
