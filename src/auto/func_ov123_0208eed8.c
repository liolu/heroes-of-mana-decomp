/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 len;
    u8 fam;
    u16 port;
    s32 addr;
} SockAddr;
typedef struct Ctx Ctx;
struct Ctx {
    s32 state;
    u8 pad[0x488 - 4];
    void (*cb)(Ctx *, s32, s32, s32);
    u8 pad2[0x494 - 0x48c];
    s32 arg494;
    u8 pad3[0x4b0 - 0x498];
    s32 sock;
    u32 time;
};
extern s32 data_ov123_020e1654;
s32 func_ov123_0207b0c4(s32);
s32 func_ov123_0207add8(s32, void *, s32, s32, SockAddr *, s32 *);
s32 func_ov123_02091150(Ctx *, s32, s32);
void *func_ov123_0208e428(Ctx *, s32, u16);
s32 func_ov123_0208e3e0(void *);
void func_ov123_0208e420(void *, s8);
void func_ov123_020911cc(Ctx *, void *);
u32 func_ov123_0207b3f4(void);
void func_ov123_0207af34(s32);
s32 func_ov123_0208eed8(Ctx *ctx) {
    SockAddr sa;
    s32 len;
    u8 buf[0x5e0];
    void *p;
    len = 8;
    while (func_ov123_0207b0c4(ctx->sock) != 0) {
        if (func_ov123_0207add8(ctx->sock, buf, 0x5db, 0, &sa, &len) != -1) {
            if (func_ov123_02091150(ctx, sa.addr, sa.port) == -1) {
                p = func_ov123_0208e428(ctx, sa.addr, sa.port);
                if (func_ov123_0208e3e0(p) != 0) {
                    return 5;
                }
                func_ov123_0208e420(p, 0x11);
                func_ov123_020911cc(ctx, p);
            }
        }
    }
    if (func_ov123_0207b3f4() - ctx->time > 2000) {
        func_ov123_0207af34(ctx->sock);
        ctx->sock  = -1;
        ctx->state = 1;
        ctx->cb(ctx, 3, data_ov123_020e1654, ctx->arg494);
    }
    return 0;
}
