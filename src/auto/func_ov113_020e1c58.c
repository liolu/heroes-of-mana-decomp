#include "m2c.h"
extern u16 data_ov113_020e516c[][16];
void MIi_CpuCopy16(const void *, void *, u32);
void func_ov113_020e1c58(s32 x) {
    x = (x / 6) % 15 + 1;
    MIi_CpuCopy16(data_ov113_020e516c[x], (void *) 0x5000700, 0x20);
}
