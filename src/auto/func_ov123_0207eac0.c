/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad0[0x100];
    s32 w100;
    u8 pad104[0x110 - 0x104];
    u8 b110[0x144 - 0x110];
    u8 b144[0x198 - 0x144];
    s32 w198;
    s32 w19c;
    s32 w1a0;
    u8 pad1a4[0x1d8 - 0x1a4];
    s32 w1d8;
    u8 pad1dc[0x418 - 0x1dc];
    s32 w418;
    u8 pad41c[0x474 - 0x41c];
    s8 b474;
} Ctx;

typedef struct {
    s32 v1;
    s32 v2;
} Pr;

typedef struct {
    u8 pad0[4];
    u8 *p4;
    u8 pad8[0xc - 8];
    s32 w0c;
    s32 w10;
    s32 state;
} Msg;

extern char data_ov123_020da3d4[];
extern char data_ov123_020da3dc[];
extern char data_ov123_020da3e4[];
extern char data_ov123_020da3ec[];
extern char data_ov123_020da41c[];
extern char data_ov123_020da428[];
extern char data_ov123_020da430[];
extern char data_ov123_020da43c[];
extern char data_ov123_020da46c[];
extern char data_ov123_020da478[];
extern char data_ov123_020da480[];
extern char data_ov123_020da48c[];
extern char data_ov123_020da49c[];
extern char data_ov123_020da4a4[];
extern char data_ov123_020da4ac[];
extern char data_ov123_020da4bc[];
extern char data_ov123_020da4f0[];
extern char data_ov123_020da4f8[];
extern char data_ov123_020da518[];

extern s32 func_ov123_02086484(void *a, char *s, s32 z);
extern void func_ov123_02083740(void *a, s32 v);
extern s32 func_ov123_0208637c(char *s, char *key, void *dst, s32 n);
extern s32 func_02026c4c(char *s);
extern s32 func_02024f10(char *s, char *k);
extern s32 func_02024ea0(char *s, char *k, s32 n);
extern void func_ov123_0208608c(void *a, s32 code, void *p);
extern void func_ov123_0207e68c(void *a, s32 x, s32 y);
extern s32 func_ov123_0207f1a8(void *a, void *b);
extern s32 func_ov123_0207f444(void *a, void *b);
extern s32 func_0202373c(char *buf, char *fmt, ...);
extern s32 func_02024c28(char *s);
extern void func_ov123_0207a92c(char *s, s32 n, char *out);
extern s32 func_020213f0(char *a, char *b, s32 n);
extern s32 *func_ov123_020837b0(void *a, s32 v);
extern void *func_ov123_020996d4(s32 n);
extern void func_ov123_02086078(void *a, char *s);
extern void *memset(void *p, s32 v, s32 n);
extern void func_ov123_02086568(void *d, char *s, s32 n);
extern s32 func_ov123_0207e5e0(void *a, Pr p, void *m, void *b, s32 z);
extern void func_ov123_02081e10(void *a, void *b);

s32 func_ov123_0207eac0(void *a, Msg *b, char *s) {
    struct {
        Pr pr;
        char buf3[0x21];
        char buf2[0x15];
        char buf[0x200];
        char buf4[0x52];
    } L;
    Ctx *c = *(Ctx **) a;
    u8 *r4;
    s32 r;
    if (func_ov123_02086484(a, s, 0)) {
        if (c->w418 == 0x106 && c->w1a0 != 0) {
            func_ov123_02083740(a, c->w1a0);
            c->w19c = 0;
            c->w1a0 = 0;
        } else if (c->w418 == 0x201) {
            if (func_ov123_0208637c(s, data_ov123_020da3d4, L.buf, 0x200)) {
                c->w1a0 = func_02026c4c(L.buf);
            }
        }
        if (func_02024f10(s, data_ov123_020da3dc)) {
            func_ov123_0208608c(a, c->w418, c);
            func_ov123_0207e68c(a, 4, 1);
            return 4;
        }
        func_ov123_0208608c(a, c->w418, c);
        func_ov123_0207e68c(a, 4, 0);
        return 4;
    }
    r4 = b->p4;
    switch (b->state) {
        case 1:
            if (func_02024ea0(s, data_ov123_020da3e4, 5)) {
                func_ov123_0208608c(a, 1, data_ov123_020da3ec);
                func_ov123_0207e68c(a, 3, 1);
                return 3;
            }
            if (func_ov123_0208637c(s, data_ov123_020da41c, r4, 0x80) == 0) {
                func_ov123_0208608c(a, 1, data_ov123_020da3ec);
                func_ov123_0207e68c(a, 3, 1);
                return 3;
            }
            if (*(s32 *) (r4 + 0x304) != 0) {
                r = func_ov123_0207f1a8(a, r4);
                if (r) {
                    return r;
                }
                b->state = 3;
            } else {
                r = func_ov123_0207f444(a, r4);
                if (r) {
                    return r;
                }
                b->state = 2;
            }
            break;
        case 3:
            if (func_02024ea0(s, data_ov123_020da428, 5)) {
                func_ov123_0208608c(a, 1, data_ov123_020da3ec);
                func_ov123_0207e68c(a, 3, 1);
                return 3;
            }
            if (func_ov123_0208637c(s, data_ov123_020da430, L.buf, 0x200) == 0) {
                func_ov123_0208608c(a, 1, data_ov123_020da43c);
                func_ov123_0207e68c(a, 3, 1);
                return 3;
            }
            c->w19c = func_02026c4c(L.buf);
            if (func_ov123_0208637c(s, data_ov123_020da46c, L.buf, 0x200) == 0) {
                func_ov123_0208608c(a, 1, data_ov123_020da43c);
                func_ov123_0207e68c(a, 3, 1);
                return 3;
            }
            c->w1a0 = func_02026c4c(L.buf);
            r       = func_ov123_0207f444(a, r4);
            if (r) {
                return r;
            }
            b->state = 2;
            break;
        case 2:
            if (func_02024ea0(s, data_ov123_020da478, 5)) {
                func_ov123_0208608c(a, 1, data_ov123_020da3ec);
                func_ov123_0207e68c(a, 3, 1);
                return 3;
            }
            if (func_ov123_0208637c(s, data_ov123_020da480, L.buf, 0x200) == 0) {
                func_ov123_0208608c(a, 1, data_ov123_020da43c);
                func_ov123_0207e68c(a, 3, 1);
                return 3;
            }
            c->w198 = func_02026c4c(L.buf);
            if (func_ov123_0208637c(s, data_ov123_020da430, L.buf, 0x200) == 0) {
                func_ov123_0208608c(a, 1, data_ov123_020da43c);
                func_ov123_0207e68c(a, 3, 1);
                return 3;
            }
            c->w19c = func_02026c4c(L.buf);
            if (func_ov123_0208637c(s, data_ov123_020da46c, L.buf, 0x200) == 0) {
                func_ov123_0208608c(a, 1, data_ov123_020da43c);
                func_ov123_0207e68c(a, 3, 1);
                return 3;
            }
            c->w1a0 = func_02026c4c(L.buf);
            if (func_ov123_0208637c(s, data_ov123_020da48c, L.buf2, 0x15) == 0) {
                L.buf2[0] = 0;
            }
            if (func_ov123_0208637c(s, data_ov123_020da49c, &c->b474, 0x19) == 0) {
                c->b474 = 0;
            }
            {
                char *p;
                u8 *t;
                if (*(s8 *) (r4 + 0xc2) != 0) {
                    p = (char *) r4 + 0xc2;
                } else if (*((s8 *) c + 0x12f) != 0) {
                    p = (char *) c + 0x12f;
                } else {
                    func_0202373c(L.buf4, data_ov123_020da4a4, c->b110, c->b144);
                    p = L.buf4;
                }
                t = r4 + 0xa1;
                func_0202373c(L.buf, data_ov123_020da4ac, t, data_ov123_020da4bc, p, r4, r4 + 0x80, t);
            }
            r = func_02024c28(L.buf);
            func_ov123_0207a92c(L.buf, r, L.buf3);
            if (func_ov123_0208637c(s, data_ov123_020da4f0, L.buf, 0x200) == 0) {
                func_ov123_0208608c(a, 1, data_ov123_020da43c);
                func_ov123_0207e68c(a, 3, 1);
                return 3;
            }
            if (func_020213f0(L.buf3, L.buf, 0x20)) {
                func_ov123_0208608c(a, 0x108, data_ov123_020da4f8);
                func_ov123_0207e68c(a, 3, 1);
                return 3;
            }
            if (c->w100) {
                s32 *q = func_ov123_020837b0(a, c->w1a0);
                q[0]   = c->w1a0;
                q[1]   = c->w19c;
            }
            c->w1d8 = 3;
            L.pr    = *(Pr *) &b->w0c;
            if (L.pr.v1 != 0) {
                s32 *m = func_ov123_020996d4(0x20);
                if (m == 0) {
                    func_ov123_02086078(a, data_ov123_020da518);
                    return 1;
                }
                memset(m, 0, 0x20);
                m[1] = c->w1a0;
                m[0] = 0;
                func_ov123_02086568(m + 2, L.buf2, 0x15);
                r = func_ov123_0207e5e0(a, L.pr, m, b, 0);
                if (r) {
                    return r;
                }
            }
            func_ov123_02081e10(a, b);
            break;
        default:
            break;
    }
    return 0;
}
