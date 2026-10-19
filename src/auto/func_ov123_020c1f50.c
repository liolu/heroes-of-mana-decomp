#include "m2c.h"

M2C_UNK func_ov123_020c1e24(s32, M2C_UNK *);        /* extern */
s32 func_ov123_020ca754(M2C_UNK *);                 /* extern */
s32 func_ov123_020ca7c0(M2C_UNK *);                 /* extern */

s32 func_ov123_020c1f50(void) {
    u8 sp0[12];
    s32 var_r5;

    func_ov123_020c1e24(1, sp0);
    if (func_ov123_020ca754(sp0) != 0) {
        return 1;
    }
    var_r5 = 2;
loop_3:
    func_ov123_020c1e24(var_r5, sp0);
    if (func_ov123_020ca754(sp0) != 0) {
        return var_r5;
    }
    var_r5 += 1;
    if (var_r5 > 3) {
        func_ov123_020c1e24(4, sp0);
        if (func_ov123_020ca7c0(sp0) != 0) {
            return 4;
        }
        return 0;
    }
    goto loop_3;
}
