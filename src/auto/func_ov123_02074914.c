/* compiler: 1.2/sp2p3 */
/* near start: 4 diffs with profile "1.2/sp2p3" */
/* near start: 19 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

typedef struct Sess {
    u8 b0;
    u8 b1;
    u8 pad2[0x492];
    u8 buf494[0x104];
    s32 f598;
    u8 pad59c[4];
    s32 f5a0;
} Sess;

typedef struct Obj {
    u8 pad[0xc];
    Sess *s;
} Obj;

extern void *(*data_ov123_020df1e4)(s32);
extern void (*data_ov123_020df210)(void *);

void func_ov123_020751c8(void *, s32);
void func_ov123_02078938(void *, void *, s32, s32);
s32 func_ov123_020774d4(void);
void func_ov123_02078e64(void *, void *, void *, s32, void *);
void func_ov123_0207749c(s32);
void MI_CpuCopy8(void *, void *, s32);
s32 func_ov123_0206c9a8(u8 *, s32, s32, s32, Obj *);
void func_ov123_0207572c(Sess *, u8 *, s32);

void func_ov123_02074914(Obj *o) {
    Sess *s;
    s32 i;
    u16 *p9;
    u16 *b;
    u16 *c;
    s32 h;
    u16 *a;
    u8 *p6;
    u8 *p5;
    u32 t;
    s32 n;
    u8 *q;
    s     = o->s;
    s->b0 = 3;
    s->b1 = 0;
    func_ov123_020751c8(&s->b0 + 2, 0x2e);
    n  = *(s32 *) ((u8 *) s + 0x594);
    h  = (n * 2) / 2;
    p5 = data_ov123_020df1e4(n);
    if (p5 == 0) {
        *((u8 *) s + 0x455) = 9;
        return;
    }
    p5[0] = 0;
    p5[1] = 2;
    func_ov123_020751c8(p5 + 2, n - 0x33);
    t     = n - 0x31;
    p5[t] = 0;
    MI_CpuCopy8(s, p5 + n - 0x30, 0x30);
    p9 = data_ov123_020df1e4(h * 8);
    if (p9 == 0) {
        data_ov123_020df210(p5);
        *((u8 *) s + 0x455) = 9;
        return;
    }
    a = p9 + h;
    b = a + h;
    c = b + h;
    func_ov123_02078938(a, p5, n, h);
    func_ov123_02078938(b, (u8 *) s + 0x598, *(s32 *) ((u8 *) s + 0x5a0), h);
    func_ov123_02078938(c, (u8 *) s + 0x494, n, h);
    t = func_ov123_020774d4();
    func_ov123_02078e64(p9, a, b, h, c);
    func_ov123_0207749c(t);
    p6 = data_ov123_020df1e4(n + 0x49);
    if (p6 == 0) {
        data_ov123_020df210(p5);
        data_ov123_020df210(p9);
        *((u8 *) s + 0x455) = 9;
        return;
    }
    p6[0] = 0x16;
    p6[1] = 3;
    p6[2] = 0;
    p6[3] = (n + 4) >> 8;
    p6[4] = n + 4;
    p6[5] = 0x10;
    p6[6] = n >> 16;
    p6[7] = n >> 8;
    p6[8] = n;
    q     = p6 + 9;
    if (n & 1) {
        *q++ = p9[n / 2];
    }
    for (i = n / 2 - 1; i >= 0; i--) {
        *q++ = p9[i] >> 8;
        *q++ = p9[i];
    }
    func_ov123_0206c9a8(p6, n + 9, 0, 0, o);
    func_ov123_0207572c(s, p6 + 5, n + 4);
    data_ov123_020df210(p6);
    data_ov123_020df210(p9);
    data_ov123_020df210(p5);
}
