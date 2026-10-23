/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 len;
    u8 fam;
    u16 port;
    s32 addr;
} SockAddr;
typedef struct {
    s32 sock;
} Ctx;
s32 func_ov123_0207b0c4(s32);
s32 func_ov123_0207add8(s32, void *, s32, s32, SockAddr *, s32 *);
s32 func_ov123_0207acc0(s32);
s32 func_ov123_02089278(Ctx *, s32, u16);
void func_ov123_0208a5b4(Ctx *);
s32 func_ov123_02089378(Ctx *, void *, s32, s32, u16);
s32 func_ov123_02089124(Ctx *ctx) {
    SockAddr sa;
    s32 len;
    u8 buf[0x5e0];
    s32 n;
    s32 e;
    while (func_ov123_0207b0c4(ctx->sock) != 0) {
        len = 8;
        n   = func_ov123_0207add8(ctx->sock, buf, 0x5dc, 0, &sa, &len);
        if (n == -1) {
            e = func_ov123_0207acc0(ctx->sock);
            if (e == -15) {
                if (func_ov123_02089278(ctx, sa.addr, ((sa.port >> 8) & 0xff) | ((sa.port << 8) & 0xff00)) == 0) {
                    return 0;
                }
            } else if (e != -35) {
                func_ov123_0208a5b4(ctx);
                return 0;
            }
        } else {
            if (func_ov123_02089378(ctx, buf, n, sa.addr, ((sa.port >> 8) & 0xff) | ((sa.port << 8) & 0xff00)) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
