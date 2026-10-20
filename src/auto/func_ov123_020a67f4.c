/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020a67f4(u32 arg0) {
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;

    t1 = (s32) ((arg0 << 0x18) & 0xFF000000);
    t2 = (s32) ((arg0 << 8) & 0xFF0000);
    t3 = (s32) ((arg0 >> 0x18) & 0xFF);
    t4 = (s32) ((arg0 >> 8) & 0xFF00);
    return t1 | (t2 | (t3 | t4));
}
