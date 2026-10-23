/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_ov123_02079808(u16 *, s32);
extern void MI_CpuFill8(void *, s32, s32);
void func_ov123_020795a4(u16 *dst, u16 *a, u16 *b, s32 n) {
    s32 i;
    s32 len;
    s32 lb;
    s32 borrow;
    len = func_ov123_02079808(a, n);
    lb  = func_ov123_02079808(b, n);
    if (len < lb) {
        len = lb;
    }
    if (len != n) {
        len++;
    }
    borrow = 0;
    i      = 0;
    while (i < len || (i < n && borrow != 0)) {
        s32 s  = a[i] - b[i] + borrow;
        dst[i] = (u16) s;
        borrow = s >> 16;
        i++;
    }
    if (dst == a) {
        return;
    }
    if (dst == b) {
        return;
    }
    MI_CpuFill8(dst + i, 0, (n - i) * 2);
}
