/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

extern s32 func_ov123_020a67f4(s32);
extern s32 func_ov123_020736c0(void *);
extern void func_0200e0a4(s32);
extern s32 data_ov123_020dd4d4;
extern s32 data_ov123_020df220;

s32 func_ov123_020a693c(s32 a, s32 b, s32 c) {
    s32 *d;
    volatile s32 *e;

    d    = &data_ov123_020dd4d4;
    d[4] = func_ov123_020a67f4(a);
    d[5] = func_ov123_020a67f4(b);
    d[6] = func_ov123_020a67f4(c);
    if (func_ov123_020736c0(d) < 0) {
        return -1;
    }
    e = &data_ov123_020df220;
    if (*e == 0) {
        do {
            func_0200e0a4(100);
        } while (*e == 0);
    }
    return 0;
}
