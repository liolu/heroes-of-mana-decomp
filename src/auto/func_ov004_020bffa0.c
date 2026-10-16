#include "m2c.h"

extern M2C_UNK data_ov004_020ce41c;

void func_ov004_020bffa0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020ce41c;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 8)      = (s32) M2C_FIELD(arg1, s32 *, 0x18);
}
