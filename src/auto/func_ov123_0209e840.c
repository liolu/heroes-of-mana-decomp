#include "m2c.h"

typedef struct {
    u8 pad0[0xD];
    u8 n;
    u8 pad0e[0xE6];
    s32 arr[43];
    s32 state;
    u8 pad1a4[0xE];
    u16 h1b2;
    u8 pad1b4[0x24];
    u32 mask;
    u8 pad1dc[0xC];
    u64 t;
} G;

s32 func_ov123_0209ab40(void);
G *func_ov123_0209d368(void);
void func_ov123_0209d354(s32);
s32 func_ov123_0209efd8(s32);
s32 func_ov123_0209ea64(s32, s32);
u64 func_0200f510(void);
s32 func_ov123_0209e464(s32, s32);
s32 func_ov123_0209e400(s32);
void func_ov123_0209f158(s32);

s32 func_ov123_0209e840(s32 a, s32 b, s32 c) {
    u64 now;
    u64 ms;
    u64 d;
    s32 r;
    s32 i;
    if (func_ov123_0209ab40() != 6) {
        return 1;
    }
    switch (b) {
        case 0xD:
            if (func_ov123_0209d368()->state != 8) {
                func_ov123_0209d354(8);
                func_ov123_0209efd8(c);
            }
            if (func_ov123_0209ea64(a, 0xE) == 0) {
                return 0;
            }
            break;
        case 0xE:
            if (func_ov123_0209d368()->state == 0xE) {
                now = func_0200f510();
                ms  = ((now - func_ov123_0209d368()->t) * 64 / 0x82EA) >> 1;
                if (ms > 300) {
                    ms = ((now - func_ov123_0209d368()->t) * 64 / 0x82EA) >> 1;
                    d  = ms + -300;
                    if (d > func_ov123_0209d368()->h1b2) {
                        func_ov123_0209d368()->h1b2 = d;
                    }
                }
                r = func_ov123_0209e464(a, 0);
                if (r != 0xFF) {
                    func_ov123_0209d368()->mask |= 1 << r;
                }
                r = func_ov123_0209e400(1);
                if (r == func_ov123_0209d368()->mask) {
                    i = 1;
                    for (; i <= func_ov123_0209d368()->n; i++) {
                        if (func_ov123_0209ea64(func_ov123_0209d368()->arr[i], 0xF) == 0) {
                            return 0;
                        }
                    }
                    func_ov123_0209d354(0xF);
                }
            } else {
                if (func_ov123_0209ea64(a, 0xF) == 0) {
                    return 0;
                }
            }
            break;
        case 0xF:
            if (func_ov123_0209d368()->state == 8) {
                func_ov123_0209f158(2);
            }
            break;
    }
    return 1;
}
