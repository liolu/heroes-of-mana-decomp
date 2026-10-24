#include "m2c.h"

typedef struct G {
    u8 p0[0xd40];
    s32 w40;
    u8 p1[0xe];
    u8 b52;
    u8 b53;
    u8 b54;
    u8 p2;
    u8 b56;
} G;
extern G data_ov112_020eca1c;
s32 FX_Div(s32, s32);
void func_ov112_020e3c44(s32, s32, s32, s32);

void func_ov112_020e6cc8(void) {
    s32 i;
    s32 d;
    s32 t;
    s32 base;
    s32 v;
    s32 y;
    s32 n;
    s32 d2;
    s32 rem;
    u8 a;
    s32 k;
    u8 b;
    if (data_ov112_020eca1c.b53 <= data_ov112_020eca1c.b56) {
        return;
    }
    d    = FX_Div(data_ov112_020eca1c.b56, data_ov112_020eca1c.b53);
    t    = (s32) (((s64) d * 64 + 0x800) >> 12);
    v    = (t << 12) >> 12;
    a    = data_ov112_020eca1c.b53;
    b    = data_ov112_020eca1c.b56;
    n    = v / 8;
    rem  = v % 8;
    y    = 0x40 - t;
    base = 0x38;
    d2   = FX_Div(y << 12, a - b);
    if (data_ov112_020eca1c.b54 != 0) {
        base += data_ov112_020eca1c.w40;
    } else {
        base += (s32) (((s64) d2 * data_ov112_020eca1c.b52 + 0x800) >> 12) >> 12;
    }
    func_ov112_020e3c44(0xf4, base + 8, data_ov112_020eca1c.b54 * 3 + 0x3d, 1);
    for (i = 0; i < n; i++) {
        func_ov112_020e3c44(0xf4, base + 0xc, data_ov112_020eca1c.b54 * 3 + 0x3f, 1);
        base += 8;
    }
    func_ov112_020e3c44(0xf4, rem + base + 8, data_ov112_020eca1c.b54 * 3 + 0x3e, 1);
    if (rem != 0) {
        k = 8 - rem;
        func_ov112_020e3c44(0xf4, base - k + 0xc, data_ov112_020eca1c.b54 * 3 + 0x3f, 1);
    }
}
