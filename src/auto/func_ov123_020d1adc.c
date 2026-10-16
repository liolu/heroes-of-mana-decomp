#include "m2c.h"

s32 func_ov123_020cbd9c(M2C_UNK *, s32);            /* extern */
extern M2C_UNK func_ov123_020d1ce4;

s32 func_ov123_020d1adc(void *arg0) {
    M2C_FIELD(arg0, s8 *, 4) = 0;
    if (func_ov123_020cbd9c(&func_ov123_020d1ce4, arg0 + 4) != 0) {
        return 1;
    }
    return 3;
}
