#include "m2c.h"

extern u16 data_ov123_020e47d0;

s32 func_ov123_020ce9bc(s32 arg0, s32 arg1) {
    s32 t = (arg1 + 1) - arg0;
    s32 p;

    data_ov123_020e47d0 = (data_ov123_020e47d0 + 5) * 0x43;
    data_ov123_020e47d0 += 0x1F;
    p = t * (u8) data_ov123_020e47d0;
    return arg0 + (p >> 8);
}
