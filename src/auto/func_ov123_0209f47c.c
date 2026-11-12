/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct S {
    u8 pad0[0xd];
    u8 b0d;
    u8 pad0e[7];
    u8 b15;
    u8 b16;
    u8 b17;
    u8 pad18[0x20 - 0x18];
    s32 w20;
    u8 pad24[0xa4 - 0x24];
    u16 h[1];
    u8 pada6[0xe4 - 0xa6];
    s32 we4;
    s32 we8;
    u64 wec;
    s32 f4[1];
    u8 padf8[0x1a0 - 0xf8];
    s32 w1a0;
    u8 b1a4;
    u8 pad1a5;
    u8 b1a6;
    u8 pad1a7[2];
    u8 b1a9;
    u8 pad1aa[0x1d4 - 0x1aa];
    s32 w1d4;
    u8 pad1d8[4];
    s32 w1dc;
    u8 pad1e0[0x200 - 0x1e0];
    s32 w200;
    u8 pad204[8];
    s32 w20c;
    u8 pad210[0x2d0 - 0x210];
    u8 b2d0[1];
} S;

extern S *func_ov123_0209d368(void);
extern void func_ov123_0209d354(s32);
extern void func_ov123_0208d4cc(s32);
extern void func_ov123_0209ed70(s32, s32);
extern void func_ov123_0209ffec(s32, s32, s32);
extern s32 func_ov123_0209e400(s32);
extern void func_ov123_0209f114(void);
extern void func_ov123_020a1b40(s32, s32, s32, s32, s32 *, s32);
extern s32 func_ov123_020a04a8(void);
extern void func_ov123_0209e3d8(void);
extern void func_ov123_0209ccc8(s32, void *, s32);
extern s32 func_ov123_0209cdb0(s32);
extern void func_ov123_020a2318(void);
extern void func_ov123_0208ee68(s32);
extern void func_ov123_0208bf30(void);
extern void func_ov123_020a2808(void);
extern s32 func_ov123_0209deb8(void);
extern void func_ov123_0208ec18(s32);
extern u64 func_0200f510(void);
extern u8 data_ov123_020dd3f4[];
extern u8 data_ov123_020e18e8[];

void func_ov123_0209f47c(s32 arg0) {
    s32 r5 = 3;
    s32 r4 = 0;
    s32 L[5];

    switch (arg0) {
        case 0: {
            S *s = func_ov123_0209d368();
            if (s->b1a4 < func_ov123_0209d368()->b0d - 1) {
                S *t;
                func_ov123_0209d354(0xd);
                t    = func_ov123_0209d368();
                L[0] = t->f4[func_ov123_0209d368()->b1a4 + 1];
                L[1] = func_ov123_0209d368()->b1a4 + 1;
                t    = func_ov123_0209d368();
                L[2] = t->b2d0[func_ov123_0209d368()->b1a4 + 1];
                t    = func_ov123_0209d368();
                L[3] = *(s32 *) ((u8 *) t + 0x24 + (func_ov123_0209d368()->b1a4 + 1) * 4);
                t    = func_ov123_0209d368();
                {
                    s32 ix = func_ov123_0209d368()->b1a4 + 1;
                    r5     = 5;
                    L[4]   = t->h[ix];
                }
            } else {
                func_ov123_0209d368()->b17 = r4;
                func_ov123_0209d368()->w20 = r4;
                func_ov123_0208d4cc(*(s32 *) ((u8 *) func_ov123_0209d368() + 0x10));
                if (func_ov123_0209d368()->b15 == 0) {
                    func_ov123_0209d354(r5);
                } else if (func_ov123_0209d368()->b15 == 1) {
                    func_ov123_0209d354(4);
                } else {
                    func_ov123_0209d354(0xa);
                }
                func_ov123_0209d368()->b1a4 = 0;
                if (func_ov123_0209d368()->b15 == 2) {
                    goto L608;
                }
                {
                    S *a = func_ov123_0209d368();
                    if (a->b0d != func_ov123_0209d368()->b16) {
                        goto L6b8;
                    }
                }
            L608:
                if (func_ov123_0209d368()->b15 == 2) {
                    S *a    = func_ov123_0209d368();
                    S *b    = func_ov123_0209d368();
                    a->w20c = b->f4[func_ov123_0209d368()->b0d];
                } else {
                    S *a;
                    func_ov123_0209d368()->w20c = 0;
                    a                           = func_ov123_0209d368();
                    a->f4[0]                    = func_ov123_0209d368()->w200;
                }
                func_ov123_0209d354(0x10);
                func_ov123_0209d368()->w1d4 = 0;
                {
                    s32 i;
                    s32 two = 2;
                    for (i = 1; i <= func_ov123_0209d368()->b0d; i++) {
                        func_ov123_0209ed70(*((u8 *) (func_ov123_0209d368()->b2d0 + i)), two);
                    }
                }
                goto L7a8;
            L6b8: {
                S *a;
                L[0] = 0;
                L[1] = func_ov123_0209d368()->b0d;
                a    = func_ov123_0209d368();
                L[2] = a->b2d0[func_ov123_0209d368()->b0d];
                if (func_ov123_0209d368()->b15 == 0) {
                    func_ov123_0209d368()->we8 = 2;
                    a                          = func_ov123_0209d368();
                    a->wec                     = func_0200f510();
                } else if (func_ov123_0209d368()->b15 == 1) {
                    func_ov123_0209ffec(1, 0, 0);
                    if (func_ov123_0209d368()->b1a6 == 0 && func_ov123_0209d368()->b0d >= 2) {
                        S *p  = func_ov123_0209d368();
                        s32 v = func_ov123_0209e400(0);
                        S *q  = func_ov123_0209d368();
                        if (p->w1dc != (v & ~(1 << q->b2d0[func_ov123_0209d368()->b0d]))) {
                            func_ov123_0209f114();
                            goto end;
                        }
                    }
                }
            }
            L7a8:
                if (func_ov123_0209d368()->b15 != 2) {
                    r4 = 1;
                }
            }
            if (func_ov123_0209d368()->w1a0 != 0x10) {
                S *a = func_ov123_0209d368();
                S *b = func_ov123_0209d368();
                S *c = func_ov123_0209d368();
                S *d = func_ov123_0209d368();
                S *e = func_ov123_0209d368();
                S *f = func_ov123_0209d368();
                func_ov123_020a1b40(8, a->f4[b->b0d], *(s32 *) ((u8 *) c + 0x24 + d->b0d * 4), e->h[f->b0d], L, r5);
                if (func_ov123_020a04a8() != 0) {
                    return;
                }
                *((u8 *) func_ov123_0209d368() + 0x3cd) = 0;
            }
            break;
        }
        case 1:
            func_ov123_0209d354(1);
            if (func_ov123_0209d368()->b15 == 3) {
                S *a    = func_ov123_0209d368();
                S *b    = func_ov123_0209d368();
                a->w20c = b->f4[func_ov123_0209d368()->b0d];
            }
            r4 = 1;
            break;
        case 2:
            func_ov123_0209d354(1);
            if (func_ov123_0209d368()->b15 == 0 || func_ov123_0209d368()->b15 == 1) {
                S *a;
                func_ov123_0209d368()->b17 = 1;
                a                          = func_ov123_0209d368();
                a->w20                     = func_ov123_0209d368()->w200;
            }
            func_ov123_0209e3d8();
            if (func_ov123_0209d368()->b0d > 1) {
                S *a = func_ov123_0209d368();
                S *b = func_ov123_0209d368();
                S *c = func_ov123_0209d368();
                S *d = func_ov123_0209d368();
                func_ov123_020a1b40(9, a->f4[0], *(s32 *) ((u8 *) b + 0x24), c->h[0], &d->f4[func_ov123_0209d368()->b0d - 1],
                                    1);
                if (func_ov123_020a04a8() != 0) {
                    return;
                }
            }
            break;
        case 3:
            func_ov123_0209d354(1);
            func_ov123_0209e3d8();
            func_ov123_0209d368()->w20c = r4;
            r4                          = 1;
            break;
        case 4: {
            s32 r7;
            S *r6;
            s32 v;
            if (func_ov123_0209d368()->b15 != 2) {
                func_ov123_0209ccc8(2, data_ov123_020dd3f4, r4);
            }
            r7 = func_ov123_0209d368()->w20c == 0;
            r6 = func_ov123_0209d368();
            v  = func_ov123_0209cdb0(func_ov123_0209d368()->w20c);
            ((void (*)(s32, s32, s32, s32, s32, s32)) *
             (s32 *) ((u8 *) r6 + 0x464))(0, 0, r7, 0, v, *(s32 *) ((u8 *) func_ov123_0209d368() + 0x468));
            if (func_ov123_0209d368()->b15 == 0 || func_ov123_0209d368()->b15 == 1) {
                func_ov123_020a2318();
            } else {
                if (func_ov123_0209d368()->we4 != 0) {
                    func_ov123_0208ee68(func_ov123_0209d368()->we4);
                    func_ov123_0209d368()->we4 = 0;
                }
                func_ov123_0208bf30();
                if (func_ov123_0209d368()->b15 == 2) {
                    func_ov123_020a2808();
                    if (func_ov123_0209deb8() != 0) {
                        return;
                    }
                    if (data_ov123_020e18e8[0] == 1) {
                        data_ov123_020e18e8[1] = 1;
                    }
                    func_ov123_0209d354(0xa);
                } else {
                    func_ov123_0209d354(1);
                }
                func_ov123_0209d368()->w20c = 0;
            }
            func_ov123_0209d368()->b1a9 = 0;
            break;
        }
        default:
            break;
    }
end:
    if (r4 == 0) {
        return;
    }
    if (func_ov123_0209d368()->b15 == 3) {
        return;
    }
    func_ov123_0208ec18(func_ov123_0209d368()->we4);
}
