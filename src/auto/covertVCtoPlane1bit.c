/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

u8 *func_0200ed38(s32, s32, s32);
void MIi_CpuClear16(s32, void *, s32);

u8 *covertVCtoPlane1bit(u32 *src) {
    s32 i;
    u8 *buf = func_0200ed38(0, -1, 0x1800);
    MIi_CpuClear16(0, buf, 0x1800);
    for (i = 0; i < 0xC000; i++) {
        s32 hi = i & 0xF800;
        s32 b  = i & 7;
        if ((src[((i >> 8) & 7) + ((hi >> 3) + (i & 0xF8))] >> (b * 4)) & 0xF) {
            buf[i >> 3] |= 1 << b;
        }
    }
    return buf;
}
