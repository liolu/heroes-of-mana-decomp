#include "m2c.h"

s32 func_ov123_020cc334(s32, M2C_UNK, M2C_UNK);     /* extern */
s32 func_ov123_020cc448(M2C_UNK, s32);              /* extern */

s32 func_ov123_020cc3d0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_ov123_020cc448(1, arg0) == 0) {
        return 0;
    }
    return func_ov123_020cc334(arg0 + 0x400, arg1, arg2);
}
