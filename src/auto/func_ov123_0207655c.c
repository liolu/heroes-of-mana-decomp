/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_02076634(u8 a, u8 b);
u32 func_ov123_02076644(u8 *a, s32 b, s32 c);
void MI_CpuCopy8(u8 *src, u8 *dst, u32 n);
void MI_CpuFill8(u8 *dst, u8 v, u32 n);

void func_ov123_0207655c(u8 *dst, u8 *src) {
    s32 n;
    s32 m;
    s32 n2;
    u32 r;

    if (func_ov123_02076634(src[0], src[1]) == 0) {
        return;
    }
    n = (src[2] << 8) + src[3];
    r = func_ov123_02076644(src + 8, n / 3, 3);
    if ((u16) r == 0) {
        return;
    }
    *(u16 *) (dst + 0x32) = (u16) r;
    m                     = (src[4] << 8) + src[5];
    n2                    = (src[6] << 8) + src[7];
    dst[0x30]             = 0;
    src                   = src + ((n + 8) + m);
    if (n2 >= 0x20) {
        MI_CpuCopy8(src, dst + 0x34, 0x20);
    } else {
        MI_CpuFill8(dst + 0x34, 0, 0x20 - n2);
        MI_CpuCopy8(src, dst + 0x54 - n2, n2);
    }
    dst[0x455] = 1;
}
