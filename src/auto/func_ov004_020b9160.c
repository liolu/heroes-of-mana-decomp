#include "m2c.h"

extern u16 data_ov004_020cf890;

s32 func_ov004_020b9160(s32 arg0, s32 arg1) {
    s32 delta;

    data_ov004_020cf890 = (data_ov004_020cf890 + 5) * 0x43;
    data_ov004_020cf890 += 0x1F;
    delta = (arg1 + 1) - arg0;
    return arg0 + ((delta * (u8) data_ov004_020cf890) >> 8);
}
