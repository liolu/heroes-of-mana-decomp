/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

void func_ov123_020a6b1c(s32 a, u32 *tbl);

u32 func_ov123_020a6b58(u32 crc, u8 *buf, s32 len, s32 init, u32 *tbl) {
    s32 i;
    u32 hi;
    u32 x;

    if (init == 0) {
        func_ov123_020a6b1c(init, tbl);
    }
    for (i = 0; i < len; i++) {
        hi  = crc >> 8;
        x   = (crc ^ buf[i]) & 0xFF;
        crc = hi ^ tbl[x];
    }
    return crc;
}
