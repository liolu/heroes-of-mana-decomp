#include "m2c.h"

void func_ov004_020bae4c(void *arg0) {
    *(s32 *) 0x040004A8 = ((u32) M2C_FIELD(arg0, u32 *, 0x1C) >> 3) | (M2C_FIELD(arg0, s32 *, 0x24) << 0x1A) |
                           0x40000000 | (M2C_FIELD(arg0, s32 *, 0x28) << 0x14) | (M2C_FIELD(arg0, s32 *, 0x2C) << 0x17) |
                           (M2C_FIELD(arg0, s32 *, 0x30) << 0x10) | (M2C_FIELD(arg0, s32 *, 0x34) << 0x12) |
                           (M2C_FIELD(arg0, s32 *, 0x38) << 0x1D);
}
