#include "m2c.h"

typedef struct P {
    u8 a;
    u8 u1;
    u8 p0[2];
    s16 w4;
    u16 c;
    u32 pad : 9;
    u32 f : 1;
    u32 rest : 22;
    u8 p1[4];
    s16 x;
    s16 b;
} P;
s32 FX_Div(s32, s32);
void func_ov120_020ec2ac(s32, s32, s32, s32);

void func_ov120_020edfc4(P *p) {
    s32 i;
    s32 base;
    s16 b;
    s32 y;
    s32 d;
    s32 k;
    s32 t;
    u8 a;
    s32 c;
    s32 n;
    s32 d2;
    s32 v;
    s32 rem;
    if (p->a <= p->b) {
        return;
    }
    c    = p->c;
    d    = FX_Div(p->b, p->a);
    t    = (s32) (((s64) d * c + 0x800) >> 12);
    v    = (t << 12) >> 12;
    y    = p->c - t;
    a    = p->a;
    b    = p->b;
    n    = v / 8;
    rem  = v % 8;
    base = p->x;
    d2   = FX_Div(y << 12, a - b);
    if (p->f != 0) {
        base += p->w4;
    } else {
        base += (s32) (((s64) d2 * p->u1 + 0x800) >> 12) >> 12;
    }
    func_ov120_020ec2ac(0xf4, base + 8, p->f * 3 + 0x16, 1);
    for (i = 0; i < n; i++) {
        func_ov120_020ec2ac(0xf4, base + 0xc, p->f * 3 + 0x18, 1);
        base += 8;
    }
    func_ov120_020ec2ac(0xf4, rem + base + 8, p->f * 3 + 0x17, 1);
    if (rem != 0) {
        k = 8 - rem;
        func_ov120_020ec2ac(0xf4, base - k + 0xc, p->f * 3 + 0x18, 1);
    }
}
