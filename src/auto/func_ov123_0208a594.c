#include "m2c.h"

s32 func_ov123_0208a594(u8 *arg0, s32 arg1) {
    u32 i;
    u32 hi;
    u32 lo;
    u16 mid;

    i   = arg1 + 1;
    hi  = arg0[arg1];
    lo  = arg0[i];
    mid = (u16) ((hi << 8) & 0xFF00);
    return (s32) (mid | lo);
}
