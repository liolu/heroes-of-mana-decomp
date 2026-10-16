#include "m2c.h"

s32 func_ov123_0208a38c(M2C_UNK, s32);              /* extern */
s32 func_ov123_0208a4c8();                          /* extern */
s32 func_ov123_0208a594(M2C_UNK, M2C_UNK);          /* extern */

s32 func_ov123_020898f8(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r0;

    if (arg2 != 2) {
        if (func_ov123_0208a4c8() != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if (func_ov123_0208a38c(arg0, func_ov123_0208a594(arg1, 0)) != 0) {
        return 1;
    }
    return 0;
}
