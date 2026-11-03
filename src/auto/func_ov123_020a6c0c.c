/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020a6bc4(void *p);

void func_ov123_020a6c0c(void *arg0, u8 *out, u8 *in, u32 n) {
    u32 i;
    u8 r;

    for (i = 0; i < n; i++) {
        r      = (u8) func_ov123_020a6bc4(arg0);
        out[i] = r ^ in[i];
    }
}
