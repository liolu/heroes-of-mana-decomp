/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void MI_CpuFill8(void *, s32, s32);
void func_ov123_020794ac(u16 *, u32, s32, s32);
s32 func_ov123_02079808(u16 *, s32);

void func_ov123_02079220(u16 *out, u16 *in, s32 n) {
    s32 m;
    s32 m2;
    s32 k;
    s32 i;
    s32 b;
    s32 a;
    s32 s;
    u32 p;
    u32 sq;
    m  = func_ov123_02079808(in, n);
    m2 = m * 2;
    if (m2 < n) {
        MI_CpuFill8(out + m2, 0, (n - m2) * 2);
    }
    k = 0;
    if (m > 0) {
        i = 0;
        do {
            if (i >= n) {
                break;
            }
            sq     = in[k] * in[k];
            out[i] = sq;
            if (i == n - 1) {
                break;
            }
            k++;
            *(u16 *) ((u8 *) out + (i + 1) * 2) = sq >> 16;
            i += 2;
        } while (k < m);
    }
    a = 0;
    if (m <= 0) {
        return;
    }
    do {
        for (b = a + 1; b < m && (s = a + b) < n; b++) {
            p = in[b] * in[a];
            if (p <= 0x7fff8000) {
                func_ov123_020794ac(out, p * 2, s, n);
            } else {
                func_ov123_020794ac(out, p, s, n);
                func_ov123_020794ac(out, p, s, n);
            }
        }
        a++;
    } while (a < m);
}
