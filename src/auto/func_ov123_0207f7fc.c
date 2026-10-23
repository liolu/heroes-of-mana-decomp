/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Out {
    u8 pad0[8];
    s32 f8;
    u8 pad1[0xc];
    s32 f18;
    s32 f1c;
} Out;
typedef struct P {
    u8 pad[0x10c];
    s32 f10c;
    u8 n1[0x1f];
    u8 n2[0x15];
    u8 n3[0x33];
    u8 n4[0x1f];
    u8 pad2[0x42];
    s32 f1d8;
} P;
typedef struct Q {
    u8 pad[0x304];
    s32 f304;
} Q;
typedef struct Ctx {
    P *p;
} Ctx;

extern char data_ov123_020da5d0[];
extern char data_ov123_020da5e4[];
extern char data_ov123_020da518[];

s32 func_ov123_0207c64c(Ctx *);
void func_ov123_02086078(Ctx *, char *);
void func_ov123_02086568(void *, void *, s32);
void func_ov123_0207b35c(void *);
void *func_ov123_020996d4(s32);
void memset(void *, s32, s32);
s32 func_ov123_02081f18(Ctx *, s32, void *, Out **, s32, s32, s32);
s32 func_ov123_0207fa54(Ctx *, Out *);
void func_ov123_02081fd0(Ctx *, Out *);
void func_ov123_0207e780(Ctx *, s32);
s32 func_ov123_0207c16c(Ctx *, s32);

s32 func_ov123_0207f7fc(Ctx *ctx, void *s1, void *s2, void *s3, void *a4, s8 *a5, s8 *a6, void *a7, s32 mode, s32 a9, s32 a10,
                        s32 a11, s32 a12) {
    P *p;
    u8 *q;
    Out *out;
    s32 r;

    p = ctx->p;
    if (p->f1d8 == 4) {
        r = func_ov123_0207c64c(ctx);
        if (r != 0) {
            return r;
        }
    }
    if (p->f1d8 != 0) {
        func_ov123_02086078(ctx, data_ov123_020da5d0);
        return 2;
    }
    switch (mode) {
        case 1:
            p->f10c = 1;
            break;
        case 0:
            p->f10c = 0;
            break;
        default:
            func_ov123_02086078(ctx, data_ov123_020da5e4);
            return 2;
    }
    p->f10c = 1;
    func_ov123_02086568(p->n1, s1, 0x1f);
    func_ov123_02086568(p->n2, s2, 0x15);
    func_ov123_02086568(p->n3, s3, 0x33);
    func_ov123_02086568(p->n4, a4, 0x1f);
    func_ov123_0207b35c(p->n3);
    q = func_ov123_020996d4(0x308);
    if (q == 0) {
        func_ov123_02086078(ctx, data_ov123_020da518);
        return 1;
    }
    memset(q, 0, 0x308);
    ((Q *) q)->f304 = a9;
    if (*a5 != 0 && *a6 != 0) {
        func_ov123_02086568(q + 0xc2, a5, 0x100);
        func_ov123_02086568(q + 0x1c2, a6, 0x100);
    }
    if (a7 != 0) {
        func_ov123_02086568(q + 0x2c2, a7, 0x41);
    }
    r = func_ov123_02081f18(ctx, 0, q, &out, a10, a11, a12);
    if (r != 0) {
        return r;
    }
    r = func_ov123_0207fa54(ctx, out);
    if (r != 0) {
        out->f1c = r;
        func_ov123_02081fd0(ctx, out);
        func_ov123_0207e780(ctx, 0);
        return r;
    }
    if (out->f8 != 0) {
        r = func_ov123_0207c16c(ctx, out->f18);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
