#include "m2c.h"

s32 func_02008fb4(u16, M2C_UNK);                    /* extern */
extern u16 data_ov123_020e4670;

s32 func_ov123_020bb664(s32 arg0) {
    s32 var_r0;
    s32 var_r1;

    var_r0 = func_02008fb4(data_ov123_020e4670, 0x1D);
    var_r1 = 0;
loop_1:
    if (var_r0 == arg0) {
        return var_r1;
    }
    var_r1 += 1;
    var_r0 += 1;
    if (var_r1 >= 4) {
        return -1;
    }
    goto loop_1;
}
