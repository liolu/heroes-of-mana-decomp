#include "m2c.h"

void func_ov111_020e1a64(void *arg0, s32 arg1) {
    if (arg1 <= 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) << arg1);
    M2C_FIELD(arg0, s32 *, 4)    = (s32) (M2C_FIELD(arg0, s32 *, 4) << arg1);
    M2C_FIELD(arg0, s32 *, 8)    = (s32) (M2C_FIELD(arg0, s32 *, 8) << arg1);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (M2C_FIELD(arg0, s32 *, 0xC) << arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) << arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) << arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) << arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) << arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) << arg1);
}
