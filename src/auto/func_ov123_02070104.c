/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_ov123_020d9858[];
extern u8 data_ov123_020df1c4;
void MI_CpuCopy8(void *s, void *d, u32 n);
s32 func_ov123_020690b8(void *a, void *b, s32 c);
void func_ov123_02070104(u8 *a, s32 b, u8 *c, s32 d) {
    s32 r;
    if (a + b != c) {
        MI_CpuCopy8(c, a + b, d);
    }
    MI_CpuCopy8(data_ov123_020d9858, a + 6, 6);
    r                   = func_ov123_020690b8(a, a + 6, b + d - 6);
    data_ov123_020df1c4 = (r < 0);
}
