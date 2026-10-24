/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern void MIi_CpuClear16(u16, void *, s32);

void UncompressPlane(u8 *src, u32 *dst, s32 size) {
    s32 bits = size << 3;
    s32 pos;
    s32 cnt;
    s32 n;
    s32 val;
    MIi_CpuClear16(0, dst, size);
    n = *(s32 *) src;
    if (n == 0) {
        MIi_CpuClear16(0xFFFF, dst, size);
        return;
    }
    src += 4;
    n -= 4;
    pos = 0;
    if (bits > 0) {
        do {
            val = (*src >> 7) & 1;
            cnt = *src & 0x7f;
            if (cnt != 0) {
                do {
                    dst[pos >> 5] |= val << (pos & 0x1f);
                    cnt--;
                    pos++;
                } while (cnt != 0);
            }
            src++;
            if (--n == 0) {
                break;
            }
        } while (pos < bits);
    }
}
