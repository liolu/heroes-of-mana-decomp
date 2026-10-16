#include "m2c.h"

void func_ov111_020e1adc(void *arg0, void *arg1) {
    if (arg0 == arg1) {
        return;
    }
    M2C_FIELD(arg1, s32 *, 0)    = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg1, s32 *, 4)    = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg1, s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg1, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg1, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(arg1, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(arg1, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
}
