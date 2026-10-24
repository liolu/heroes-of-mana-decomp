/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0207336c(u16);
s32 func_ov123_020711c4(void *);

s32 func_ov123_020711f8(u16 *arg0) {
    s32 sum = 0x80;
    if (arg0[1] != 0) {
        sum += 0x114;
        sum += func_ov123_0207336c(arg0[1]);
        sum += func_ov123_0207336c(arg0[4]);
        sum += func_ov123_020711c4(arg0 + 8);
    }
    if (arg0[3] != 0) {
        sum += 0x110;
        sum += func_ov123_0207336c(arg0[3]);
        sum += func_ov123_0207336c(arg0[5]);
        sum += func_ov123_0207336c(arg0[6]);
        sum += func_ov123_020711c4(arg0 + 10);
    }
    return sum;
}
