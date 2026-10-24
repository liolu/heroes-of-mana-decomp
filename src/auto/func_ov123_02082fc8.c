/* compiler: 1.2/sp3 */
/* near start: 22 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct {
    s32 state;
    u8 pad4[4];
    s32 x8;
    s32 xc;
    u8 pad10[8];
    char *x18;
    u8 pad1c[4];
    s32 x20;
    u8 pad24[4];
    char x28[4];
} Msg;

typedef struct {
    u8 pad[0x1a0];
    s32 x1a0;
} Priv;

typedef struct {
    Priv *p;
} Ctx;

extern char data_ov123_020dace4[];
extern char data_ov123_020dab78[];
extern char data_ov123_020daccc[];
extern char data_ov123_020dad04[];
extern char data_ov123_020dad0c[];
extern char data_ov123_020dad14[];
extern char data_ov123_020dad1c[];
extern char data_ov123_020dad24[];
extern char data_ov123_020dad2c[];
extern char data_ov123_020dad34[];
extern char data_ov123_020dad3c[];
void func_02020d04(char *, char *, s32, s32);
s32 func_ov123_0207dbb8(Ctx *, s32, char **, s32 *, s32 *, char *);
char *func_02024f10(char *, char *);
s32 func_02024ea0(char *, char *, s32);
s32 func_ov123_0208637c(char *, char *, char *, s32);
s32 func_02026c4c(char *);
s32 func_0202373c(char *, char *, char *, s32, s32);
s32 func_02024c28(char *);
void func_ov123_0207a92c(char *, s32, char *);
s32 func_02024d8c(char *, char *);
void func_ov123_0207e128(Ctx *, char *, char *);

s32 func_ov123_02082fc8(Ctx *ctx, Msg *msg) {
    char a10[16];
    char a20[31];
    char a3f[33];
    char a60[33];
    char a81[0x100];
    s32 v8;
    s32 v0c;
    Priv *p;
    char *q;
    char *s;
    s32 n;
    s32 r;
    p = ctx->p;
    if (msg->state != 0x68) {
        func_02020d04(data_ov123_020dace4, data_ov123_020dab78, 0, 0xc1);
    }
    r = func_ov123_0207dbb8(ctx, msg->x8, &msg->x18, &v8, &v0c, data_ov123_020daccc);
    if (r != 0) {
        return r;
    }
    if (v0c != 0) {
        msg->state = 0x6a;
        return 0;
    }
    q = func_02024f10(msg->x18, data_ov123_020dad04);
    if (q != 0) {
        *q = 0;
        s  = msg->x18;
        if (func_02024ea0(s, data_ov123_020dad0c, 6) == 0) {
            if (func_ov123_0208637c(s, data_ov123_020dad14, a10, 0x10) == 0) {
                msg->state = 0x6a;
                return 0;
            }
            n = func_02026c4c(a10);
            if (func_ov123_0208637c(msg->x18, data_ov123_020dad1c, a20, 0x1f) == 0) {
                msg->state = 0x6a;
                return 0;
            }
            if (func_ov123_0208637c(msg->x18, data_ov123_020dad24, a3f, 0x21) == 0) {
                msg->state = 0x6a;
                return 0;
            }
            func_0202373c(a81, data_ov123_020dad2c, (char *) p + 0x177, p->x1a0, n);
            func_ov123_0207a92c(a81, func_02024c28(a81), a60);
            if (func_02024d8c(a3f, a60) != 0) {
                func_ov123_0207e128(ctx, msg->x28, data_ov123_020dad34);
                func_ov123_0207e128(ctx, msg->x28, data_ov123_020dad04);
                msg->state = 0x6a;
                return 0;
            }
            func_ov123_0207e128(ctx, msg->x28, data_ov123_020dad3c);
            func_ov123_0207e128(ctx, msg->x28, data_ov123_020dad04);
            msg->state = 0x69;
            msg->xc    = n;
        } else {
            msg->state = 0x6a;
            return 0;
        }
        msg->x20 = 0;
    }
    return 0;
}
