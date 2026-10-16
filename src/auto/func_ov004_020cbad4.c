#include "m2c.h"

extern M2C_UNK data_ov004_020cdf9c;
extern M2C_UNK data_ov004_020ce058;

void func_ov004_020cbad4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020cdf9c;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020ce058;
}
