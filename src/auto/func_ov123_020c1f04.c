#include "m2c.h"

M2C_UNK func_ov123_020c1e24(s32, M2C_UNK *);        /* extern */
s32 func_ov123_020ca82c(M2C_UNK *);                 /* extern */

s32 func_ov123_020c1f04(void) {
    u8 sp0[12];
    s32 var_r5;

    var_r5 = 2;
loop_1:
    func_ov123_020c1e24(var_r5, sp0);
    if (func_ov123_020ca82c(sp0) != 0) {
        return var_r5;
    }
    var_r5 += 1;
    if (var_r5 > 3) {
        return 0;
    }
    goto loop_1;
}
