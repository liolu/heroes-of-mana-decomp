/* compiler: 1.2/sp2p3 */
/* near start: 35 diffs with profile "1.2/sp2p3" */
#include "m2c.h"
extern void MI_CpuCopy8(void *, void *, s32);
extern s32 func_020213f0(void *, void *, s32);
extern void func_ov123_02077580(void *);

void func_ov123_020766fc(u8 *a, u8 *b) {
    u8 old;
    u8 *q;
    u8 len;
    u8 *p;
    MI_CpuCopy8(b + 2, a + 0x54, 0x20);
    q   = b + 0x22;
    old = a[0x30];
    b   = (u8 *) ((s32) b + 0x23);
    len = *q;
    if (old != 0 && len == 0x20 && func_020213f0(a + 0x74, b, 0x20) == 0) {
        a[0x31] = 1;
    } else {
        if (old != 0) {
            func_ov123_02077580(a);
        }
        if (len == 0) {
            a[0x30] = 0;
        } else {
            MI_CpuCopy8(b, a + 0x74, 0x20);
            a[0x30] = 1;
        }
        a[0x31] = 0;
    }
    p                   = b + len;
    *(u16 *) (a + 0x32) = (p[0] << 8) + p[1];
    a[0x455]            = 2;
}
