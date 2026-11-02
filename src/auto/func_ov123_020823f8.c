/* compiler: 1.2/sp3 */
#include "m2c.h"
extern void func_02020d04(u8 *, u8 *, s32, s32);
extern void func_0202373c(u8 *buf, u8 *fmt, s32 a2, s32 a3, s32 v6, s32 v4);
extern void func_ov123_0207dde4(u8 *a0, s32 a1, u8 *buf);
extern u8 data_ov123_020dab98[];
extern u8 data_ov123_020dab78[];
extern u8 data_ov123_020daba4[];
void func_ov123_020823f8(u8 *a0, s32 a1, s32 a2, s32 *a3) {
    u8 buf[0x44];
    s32 v6;
    s32 v5;
    s32 v4;
    v6 = a3[1];
    v5 = a3[0];
    v4 = a3[2];
    if (a3 == 0) {
        func_02020d04(data_ov123_020dab98, data_ov123_020dab78, 0, 0x376);
    }
    func_0202373c(buf, data_ov123_020daba4, a2, v5, v6, v4);
    func_ov123_0207dde4(a0, a1, buf);
}
