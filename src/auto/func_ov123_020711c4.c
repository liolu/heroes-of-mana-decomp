/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0207336c(u32);

s32 func_ov123_020711c4(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_ov123_0207336c(((u8 *) arg0)[3] * 4);
    return temp_r4 + func_ov123_0207336c((u32) * (u16 *) arg0);
}
