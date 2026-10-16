#include "m2c.h"

extern M2C_UNK data_ov004_020ce644;

void func_ov004_020c28fc(void *arg0, s32 arg1, s32 arg2, s8 arg3, s32 arg4) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020ce644;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 8)      = arg2;
    M2C_FIELD(arg0, s8 *, 0xC)     = arg3;
    M2C_FIELD(arg0, s32 *, 0x10)   = arg4;
}
