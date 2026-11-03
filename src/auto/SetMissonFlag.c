/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 *data_0203673c;

void SetMissonFlag(s32 idx, s32 flag) {
    u8 *e;
    u32 v;

    e                  = *(u8 **) (data_0203673c + 0x2C) + idx * 0x14;
    v                  = *(u32 *) (e + 0xC);
    v                  = (v & ~0x10000000U) | (((u32) flag << 31) >> 3);
    *(u32 *) (e + 0xC) = v;
}
