#include "m2c.h"

void func_ov004_020ca5bc(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
