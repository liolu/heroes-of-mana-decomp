#include "m2c.h"

void func_ov123_020ceebc(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0)   = 0;
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 4);
}
