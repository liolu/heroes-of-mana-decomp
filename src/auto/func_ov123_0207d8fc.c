#include "m2c.h"
typedef struct {
    s8 *buf;
    s32 pad;
    s32 len;
    s32 f_c;
} Ctx;
s8 *func_02024ed4(s8 *, s32);
s32 func_02024ea0(s8 *, void *, s32);
s32 func_02026c4c(void *);
s32 func_ov123_0208637c(s8 *, void *, void *, s32);
extern u8 data_ov123_020da0b8[];
extern u8 data_ov123_020da0c0[];
extern u8 data_ov123_020da0c4[];

s32 func_ov123_0207d8fc(s32 unused, Ctx *ctx, s8 **out, s32 *p3, s32 *p4) {
    s32 sp[5];
    s8 *q;
    s32 n;
    s32 k;
    *out = NULL;
    if (ctx->len < 5) {
        return 0;
    }
    q = func_02024ed4(ctx->buf, 10);
    if (q != NULL) {
        if (func_02024ea0(q - 5, data_ov123_020da0b8, 5) != 0) {
            return 3;
        }
        *q = 0;
        if (func_ov123_0208637c(ctx->buf, data_ov123_020da0c0, sp, 16) == 0) {
            return 3;
        }
        *p3 = func_02026c4c(sp);
        if (func_ov123_0208637c(ctx->buf, data_ov123_020da0c4, sp, 16) == 0) {
            return 3;
        }
        n = func_02026c4c(sp);
        k = n + 1;
        if (ctx->len > k + (q - ctx->buf)) {
            if (q[k] != 0) {
                return 3;
            }
            *out     = q + 1;
            *p4      = n;
            ctx->f_c = k + (q - ctx->buf) + 1;
        } else {
            *q = 10;
        }
    }
    return 0;
}
