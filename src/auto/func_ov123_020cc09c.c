#include "m2c.h"

s32 func_ov123_020cbf1c(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_ov123_020cc448(M2C_UNK, s32);              /* extern */

s32 func_ov123_020cc09c(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    if (func_ov123_020cc448(1, arg0) == 0) {
        return 0;
    }
    return func_ov123_020cbf1c(arg0 + 0x400, arg1, arg2, arg3, arg4);
}
