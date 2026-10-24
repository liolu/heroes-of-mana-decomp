/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_ov123_020757dc(void *, u8 *);
void func_ov123_0206c9a8(u8 *, s32, s32, s32, void *);
void func_ov123_02074144(u8 *p) {
    u8 *q = *(u8 **) (p + 0xc);
    u8 buf[28];
    if (q[0x455] == 8) {
        buf[0] = 0x15;
        buf[1] = 3;
        buf[2] = 0;
        buf[3] = 0;
        buf[4] = 2;
        buf[5] = 1;
        buf[6] = 0;
        func_ov123_0206c9a8(buf, func_ov123_020757dc(q, buf), 0, 0, p);
    }
    q[0x455] = 0;
}
