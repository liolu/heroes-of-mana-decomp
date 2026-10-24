#include "m2c.h"

void MI_CpuFill8(u8 *, s32, s32);
void func_ov123_020bbb70(u8 *, s32);
void func_ov123_020bbbf8(u8 *, s32);
u8 *func_ov123_020c35d4(void);
void memset(u8 *, s32, s32);

typedef struct {
    u8 lo : 2;
    u8 mid : 6;
} Bits;

void func_ov123_020bc060(u32 which, s32 arg1) {
    u8 buf[0x28];
    s32 n;
    u8 *o;
    o = func_ov123_020c35d4();
    switch (which) {
        case 0:
            func_ov123_020bbbf8(o + 0x40, arg1);
            return;
        case 1:
            switch (((Bits *) (o + 0xE6))->lo) {
                case 0:
                    return;
                case 1:
                    n = 0xA;
                    break;
                case 2:
                    n = 0x1A;
                    break;
                case 3:
                    n = 0x20;
                    break;
            }
            if (((Bits *) (o + 0xE6))->mid == 1) {
                n = n / 2;
            }
            MI_CpuFill8(buf, 0, 0x21);
            memset(buf, 0x2A, n);
            func_ov123_020bbbf8(buf, arg1);
            return;
        case 3:
            if (o[0xF5] != 0) {
                return;
            }
            func_ov123_020bbb70(o + 0xC0, arg1);
            return;
        case 4:
            if (o[0xF5] != 0) {
                return;
            }
            func_ov123_020bbb70(o + 0xF0, arg1);
            return;
        case 5:
            if (o[0xF5] != 0) {
                return;
            }
            func_ov123_020bbb70(o + 0xC4, arg1);
            return;
        case 7:
            if (o[0xF6] != 0) {
                return;
            }
            func_ov123_020bbb70(o + 0xC8, arg1);
            return;
        case 8:
            if (o[0xF6] != 0) {
                return;
            }
            func_ov123_020bbb70(o + 0xCC, arg1);
            return;
    }
}
