/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_0202d478(s32 a, s32 b);

void func_ov123_020a6a18(s8 *arg0, u8 *arg1, s32 arg2) {
    s32 n;
    s32 i;
    s32 t;
    u8 v;

    n = func_0202d478(arg2, 2);
    i = 0;
    if (n > 0) {
        do {
            t = n + i;
            v = arg1[t];
            v ^= arg0[i];
            arg1[t] = v;
            i += 1;
        } while (i < n);
    }
}
