#include "m2c.h"

void func_ov123_020d1a8c(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s8 *, 0)  = 1;
    M2C_FIELD(arg2, s32 *, 4) = arg0;
    M2C_FIELD(arg2, s32 *, 8) = arg1;
}
