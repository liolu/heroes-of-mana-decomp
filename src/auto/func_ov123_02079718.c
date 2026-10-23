/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_ov123_02079808(u16 *, s32);
extern void MI_CpuFill8(void *, s32, s32);
void func_ov123_02079718(u16 *dst, u16 *a, u16 *b, s32 n) {
    s32 i;
    s32 len;
    s32 lb;
    u32 carry;
    len = func_ov123_02079808(a, n);
    lb  = func_ov123_02079808(b, n);
    if (len < lb) {
        len = lb;
    }
    if (len != n) {
        len++;
    }
    carry = 0;
    for (i = 0; i < len; i++) {
        u32 s  = a[i] + b[i] + carry;
        dst[i] = (u16) s;
        carry  = s >> 16;
    }
    if (dst == a) {
        return;
    }
    if (dst == b) {
        return;
    }
    MI_CpuFill8(dst + i, 0, (n - i) * 2);
}
