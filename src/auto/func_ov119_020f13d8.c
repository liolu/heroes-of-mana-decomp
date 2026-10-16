#include "m2c.h"

void func_ov119_020f13d8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~1);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
