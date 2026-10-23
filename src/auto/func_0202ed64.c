#include "m2c.h"
typedef struct {
    s32 w[6];
} A;
typedef struct {
    s32 w[7];
} B;
typedef struct {
    s32 w[21];
} C;
typedef struct {
    B b;
    C c;
} R;
typedef struct {
    A a;
    B b;
    C c;
} S;
s32 func_0202e110(S *);
s32 func_0202e12c(S *);
u8 *func_0202de8c(s32, s32 *);
u8 *func_0202ed64(R *r, A *a) {
    S s;
    s32 n;
    s32 out, off;
    u8 *p;
    u8 *q;
    s.a.w[0] = a->w[0];
    s.a.w[1] = a->w[1];
    s.a.w[2] = a->w[2];
    s.a.w[3] = a->w[3];
    s.a.w[4] = a->w[4];
    s.a.w[5] = a->w[5];
    s.b.w[0] = r->b.w[0];
    s.b.w[1] = r->b.w[1];
    s.b.w[2] = r->b.w[2];
    s.b.w[3] = r->b.w[3];
    s.b.w[4] = r->b.w[4];
    s.b.w[5] = r->b.w[5];
    s.b.w[6] = r->b.w[6];
    s.c      = r->c;
    n        = func_0202e110(&s);
    while (1) {
        switch (n) {
            default:
                return 0;
            case 0:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 15:
            case 16:
            case 17:
            case 18:
                n = func_0202e12c(&s);
                continue;
            case 13:
                func_0202de8c(s.a.w[2] + 1, &out);
                p              = (u8 *) s.b.w[6];
                off            = out;
                q              = p + off;
                ((s32 *) r)[0] = *(s32 *) (q + 4);
                ((s32 *) r)[1] = *(s32 *) (p + off);
                ((s32 *) r)[2] = 0;
                ((s32 *) r)[3] = (s32) q;
                return q;
        }
    }
}
