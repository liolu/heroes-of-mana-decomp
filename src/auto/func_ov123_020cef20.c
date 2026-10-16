#include "m2c.h"

s32 func_ov123_020cef20(void *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2                     = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (temp_r2 + arg1);
    return temp_r2;
}
