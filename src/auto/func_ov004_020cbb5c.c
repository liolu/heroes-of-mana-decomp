#include "m2c.h"

extern M2C_UNK data_ov004_020ce41c;
extern M2C_UNK data_ov004_020ce458;

void func_ov004_020cbb5c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_ov004_020ce458;
    M2C_FIELD(arg0, M2C_UNK **, 4)    = &data_ov004_020ce41c;
    M2C_FIELD(arg0, s32 *, 8)         = 0;
    M2C_FIELD(arg0, s32 *, 0xC)       = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_ov004_020ce41c;
    M2C_FIELD(arg0, s32 *, 0x14)      = 0;
    M2C_FIELD(arg0, s32 *, 0x18)      = 0;
}
