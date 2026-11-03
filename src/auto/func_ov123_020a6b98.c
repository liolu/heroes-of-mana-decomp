/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

extern u8 data_ov123_020e23cc[];

s32 func_ov123_020a6b58(s32 a, void *b, s32 c, s32 d, void *e);

u8 func_ov123_020a6b98(void *arg0, s32 arg1) {
    s32 z = 0;
    s32 m;
    s32 r;

    m = ~z;
    r = func_ov123_020a6b58(~z, arg0, arg1, z, data_ov123_020e23cc);
    return (u8) (r ^ m);
}
