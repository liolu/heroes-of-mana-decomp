#include "m2c.h"

s32 func_ov123_020cc334(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_020cc448(M2C_UNK, M2C_UNK);          /* extern */

s32 func_ov123_020cc40c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_ov123_020cc448(0, arg0) == 0) {
        return 0;
    }
    return func_ov123_020cc334(arg0, arg1, arg2);
}
