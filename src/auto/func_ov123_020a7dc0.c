/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 func_ov123_020a7dc0(u8 *arg0, s32 arg1) {
    s32 i;
    u32 c;

    for (i = 0; i < arg1; i++) {
        c = *arg0;
        arg0++;
        if (c < 0x20U || c > 0x7FU) {
            return -1;
        }
    }
    return 0;
}
