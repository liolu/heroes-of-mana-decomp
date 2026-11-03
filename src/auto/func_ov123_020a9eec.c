/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

void func_ov123_020a9eec(s8 *dst, s32 val, u32 n) {
    u32 i;

    for (i = 0; i < n; i++) {
        *dst = (s8) val;
        dst++;
    }
}
