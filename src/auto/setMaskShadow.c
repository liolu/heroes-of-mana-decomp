/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020a9df8;

void setMaskShadow(void) {
    M2C_FIELD((void *) 0x040004C0, s32 *, 0)     = 0x40004000;
    M2C_FIELD((void *) 0x040004C0, s32 *, 4)     = 0x40004000;
    M2C_FIELD((void *) 0x040004C0, s32 *, -0x18) = 0;
    M2C_FIELD((void *) 0x040004C0, s32 *, -0x1C) = 0x80071;
}
