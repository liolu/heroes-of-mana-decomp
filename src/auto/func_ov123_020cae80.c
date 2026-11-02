#include "m2c.h"

extern void *data_ov123_020e4750;

s32 func_ov123_020c9468(u32, u32 *);

s32 func_ov123_020cae80(u32 *p) {
    u8 *base;
    s32 idx;
    u32 val;

    *p   = (*p & 0xc1fffcff) | 0x200;
    base = data_ov123_020e4750;
    idx  = 0;
    if ((u8 *) p >= base + 0x400) {
        idx = 1;
    }
    val = *(u32 *) (base + 0x800 + idx * 4);
    return func_ov123_020c9468(val, p);
}
