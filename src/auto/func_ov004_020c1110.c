#include "m2c.h"

void func_ov004_020c1110(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x94) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x98) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, u16 *, 0xB8) = (u16) (M2C_FIELD(arg0, u16 *, 0xB8) | 8);
}
