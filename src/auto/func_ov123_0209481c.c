#include "m2c.h"
extern u8 data_ov123_020dbed0[];
s64 func_ov123_02094b28(s32 a);
u32 func_ov123_02094b20(s32 a);
void func_ov123_020948ac(s64 r, s32 c, void *d);
void func_0200cdbc(s32 a, s32 b, void *fmt, void *c, ...);
void func_ov123_0209481c(s32 a, u32 b, s32 c) {
    u8 buf2[0x17];
    u8 buf1[0x15];
    func_ov123_020948ac(func_ov123_02094b28(a), 0x2b, buf1);
    func_ov123_020948ac((s64) func_ov123_02094b20(a), 0x20, buf2);
    func_0200cdbc(c, 0x15, data_ov123_020dbed0, buf1, (b >> 24) & 0xff, (b >> 16) & 0xff, (b >> 8) & 0xff, b & 0xff, buf2);
}
