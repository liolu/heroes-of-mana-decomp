#include "m2c.h"

typedef struct {
    u8 p[0x9A8];
    u32 lo : 8;
    u32 mid : 8;
    u32 x : 3;
    u32 b19 : 1;
    u32 rest : 12;
} G1;

typedef struct {
    u8 p[0xB2];
    u16 lo : 8;
    u16 hi : 8;
} G2;

extern G1 data_ov116_020e71a8;
extern G2 data_ov116_020e7aa8;

s32 func_ov116_020e2bac(s32 a0) {
    switch (a0) {
        case 0:
            if (data_ov116_020e71a8.lo == 1) {
                return 1;
            }
            break;
        case 1:
            if (data_ov116_020e71a8.lo == 2) {
                return 1;
            }
            break;
        case 2:
            return data_ov116_020e71a8.b19;
        case 3:
        case 4:
            if (a0 == data_ov116_020e71a8.mid) {
                return 1;
            }
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            if (a0 == data_ov116_020e7aa8.lo) {
                return 1;
            }
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            if (a0 == data_ov116_020e7aa8.hi) {
                return 1;
            }
            break;
    }
    return 0;
}
