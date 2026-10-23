/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    s32 pad0;
    volatile s32 sock;
    volatile s32 buf;
    volatile s32 size;
} A;
typedef struct {
    u8 len;
    u8 fam;
    u16 port;
    u32 addr;
} SA;
typedef struct {
    u8 pad[0xc];
    s32 **pp;
} H;
typedef struct {
    u8 pad[4];
    A *a;
    u8 pad2[0xc];
    s32 f14;
} B;

extern u8 data_ov123_020dae34[], data_ov123_020db0fc[], data_ov123_020db124[], data_ov123_020dadf4[];
extern u8 data_ov123_020db158[], data_ov123_020db188[], data_ov123_020dae64[], data_ov123_020db1a8[];

void *func_ov123_020996d4(s32);
void func_ov123_02086078(void *, void *);
s32 func_ov123_0207af50(s32, s32, s32);
void func_ov123_0208608c(void *, s32, void *);
void func_ov123_0207e68c(void *, s32, s32);
s32 func_ov123_0207b314(s32, s32);
H *func_ov123_02073aec(void *);
void func_02020d04(void *, void *, s32, s32);
s32 func_ov123_0207ae7c(s32, SA *, s32);
s32 func_ov123_0207acc0(s32);

s32 func_ov123_02085c40(void *ctx, B *b) {
    A *a;
    H *h;
    SA sa;
    s32 r, s;
    s32 *z;

    a       = b->a;
    a->size = 0x1000;
    a->buf  = (s32) func_ov123_020996d4(a->size + 1);
    if (a->buf == 0) {
        func_ov123_02086078(ctx, data_ov123_020dae34);
        return 1;
    }
    a->sock = func_ov123_0207af50(2, 1, 0);
    s       = a->sock;
    if (s == -1) {
        func_ov123_0208608c(ctx, 5, data_ov123_020db0fc);
        func_ov123_0207e68c(ctx, 3, 1);
        return 3;
    }
    if (func_ov123_0207b314(s, 0) == 0) {
        func_ov123_0208608c(ctx, 5, data_ov123_020db124);
        func_ov123_0207e68c(ctx, 3, 1);
        return 3;
    }
    h = func_ov123_02073aec(data_ov123_020dadf4);
    if (h == 0) {
        func_ov123_0208608c(ctx, 5, data_ov123_020db158);
        func_ov123_0207e68c(ctx, 3, 1);
        return 3;
    }
    z       = (s32 *) &sa;
    z[0]    = 0;
    z[1]    = 0;
    sa.fam  = 2;
    sa.addr = **h->pp;
    if (sa.addr == 0) {
        func_02020d04(data_ov123_020db188, data_ov123_020dae64, 0, 0x59);
    }
    sa.port = 0xcd74;
    if (func_ov123_0207ae7c(a->sock, &sa, 8) == -1) {
        r = func_ov123_0207acc0(a->sock);
        if (r == -6) {
            goto ok;
        }
        if (r == -26) {
            goto ok;
        }
        if (r == -76) {
            goto ok;
        }
        func_ov123_0208608c(ctx, 5, data_ov123_020db1a8);
        func_ov123_0207e68c(ctx, 3, 1);
        return 3;
    }
ok:
    b->f14 = 1;
    return 0;
}
