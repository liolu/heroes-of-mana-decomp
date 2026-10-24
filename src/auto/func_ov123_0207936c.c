/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_ov123_02079808(u16 *, s32);
void MI_CpuFill8(void *, u32, u32);
void func_ov123_0207936c(u16 *dst, u16 *src, u32 mul, s32 n) {
    s32 m = func_ov123_02079808(src, n);
    s32 i;
    u32 carry = 0;
    i         = carry;
    if (m > 0) {
        do {
            u32 v  = src[i] * mul + carry;
            dst[i] = v;
            i++;
            carry = v >> 16;
        } while (i < m);
    }
    if (i < n) {
        dst[i] = carry;
        i++;
    }
    MI_CpuFill8(dst + i, 0, (n - i) * 2);
}
