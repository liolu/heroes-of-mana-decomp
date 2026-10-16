#include "m2c.h"

void func_ov004_020c04dc(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x74) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x7C) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s8 *, 0x34)  = 1;
}
