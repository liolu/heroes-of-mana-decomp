/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020ac750(void *ctx, u8 *p, s32 a, s32 b);

s32 func_ov123_020ac718(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *ctx;
    u16 v;
    u16 off;

    ctx = arg0 + 8;
    v   = *(u16 *) arg0;
    off = (u16) (((v >> 8) & 0xFF) | ((v << 8) & 0xFF00));
    return func_ov123_020ac750(&ctx, arg0 + 8 + off, arg1, arg2);
}
