#include "m2c.h"

s32 func_ov123_020cc40c(M2C_UNK, M2C_UNK *, void *); /* extern */
extern M2C_UNK func_ov123_020d1ce4;

s32 func_ov123_020d1bbc(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s8 *, 0x18)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    if (func_ov123_020cc40c(arg1, &func_ov123_020d1ce4, arg0 + 0x18) != 0) {
        return 1;
    }
    return 3;
}
