/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    s32 pad0;
    s8 *cur;
    s8 *end;
} Buf;
typedef struct {
    u8 pad[0x19f4];
    s32 cnt;
    Buf buf;
} Ctx;
extern s8 data_ov123_020dc29c[];
extern s8 data_ov123_020dc2a0[];
s32 func_ov123_02099370(s32, s32, s8 *, s32);
s32 func_02024c28(s8 *);
s32 func_ov123_020967ac(Ctx *, Buf *, s32);
s32 func_0200cdbc(s8 *, s32, s8 *, s8 *);
s32 func_ov123_020969c4(Ctx *ctx, s8 *str, s32 a, s32 b) {
    s32 n, need, avail, l1;
    s8 *sep;
    Buf *buf;
    buf = &ctx->buf;
    if (ctx->cnt == 0) {
        sep = data_ov123_020dc29c;
    } else {
        sep = data_ov123_020dc2a0;
    }
    ctx->cnt = ctx->cnt + 1;
    n        = func_ov123_02099370(a, b, 0, 0);
    l1       = func_02024c28(sep);
    need     = n + (l1 - 2 + func_02024c28(str));
    avail    = buf->end - buf->cur;
    if (need > avail) {
        if (func_ov123_020967ac(ctx, buf, need - avail + 1) == 0) {
            return 1;
        }
        avail = buf->end - buf->cur;
    }
    buf->cur += func_0200cdbc(buf->cur, avail, sep, str);
    if (func_ov123_02099370(a, b, buf->cur, buf->end - buf->cur - 1) < 0) {
        return 1;
    }
    buf->cur += n;
    *buf->cur = 0;
    return 0;
}
