#include "m2c.h"

s32 func_ov123_020cf86c(u16);                       /* extern */

s32 func_ov123_020cf938(void *arg0, u16 arg1, u32 arg2) {
    s32 var_r6;

    if ((M2C_FIELD(arg0, u16 *, 4) & 1) && (func_ov123_020cf86c(arg1) == 0)) {
        return 0;
    }
    if ((M2C_FIELD(arg0, u16 *, 4) & 2) && (func_ov123_020cf86c((u16) (M2C_FIELD(arg0, u16 *, 6) + 0x32)) == 0)) {
        return 0;
    }
    if (M2C_FIELD(arg0, u16 *, 4) & 4) {
        var_r6 = 2;
    loop_8:
        if (func_ov123_020cf86c((u16) (var_r6 + 0x32)) == 0) {
            return 0;
        }
        var_r6 += 1;
        if (var_r6 > 0x1B) {
            goto block_11;
        }
        goto loop_8;
    }
block_11:
    if ((M2C_FIELD(arg0, u16 *, 4) & 8) && ((arg2 == 0x1F) || (arg2 < (u32) M2C_FIELD(arg0, u16 *, 8)))) {
        return 0;
    }
    return 1;
}
