#include "m2c.h"

void func_ov004_020c1090(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC)  = arg1;
    M2C_FIELD(arg0, u16 *, 0xB8) = (u16) (M2C_FIELD(arg0, u16 *, 0xB8) | 2);
}
