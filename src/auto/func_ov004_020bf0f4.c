#include "m2c.h"

void func_ov004_020bf0f4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s8 *, 0x46)  = 1;
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
}
