#include "m2c.h"

s32 FX_Div(s32, s32);
void func_ov114_020e21b0(s32, s32, s32, s32);
typedef struct {
    u8 pad0[0x514];
    u32 f514_a : 12;
    u32 f514_b : 1;
    u32 f514_c : 19;
    u32 pad518;
    u8 b51C;
    u8 b51D;
} A;
extern A data_ov114_020e6148;
extern s16 data_ov114_020e6648[];

void func_ov114_020e415c(void) {
    s32 q;
    s32 x;
    s32 n;
    s32 i;
    s32 y;
    s32 cnt;
    s32 rem;
    u32 t;
    s32 w;
    if (data_ov114_020e6148.b51C <= 8) {
        return;
    }
    q   = FX_Div(8, data_ov114_020e6148.b51C);
    x   = (s32) (((s64) q * 0x58 + 0x800) >> 12);
    n   = (x << 12) >> 12;
    cnt = n / 8;
    rem = n % 8;
    y   = 0x38;
    q   = FX_Div((0x58 - x) << 12, data_ov114_020e6148.b51C - 8);
    t   = data_ov114_020e6148.f514_b;
    if (t != 0) {
        y += data_ov114_020e6648[0x10];
    } else {
        y += (s32) (((s64) q * data_ov114_020e6148.b51D + 0x800) >> 12) >> 12;
    }
    func_ov114_020e21b0(0xF4, y + 8, t * 3 + 0x13, 1);
    for (i = 0; i < cnt; i++) {
        func_ov114_020e21b0(0xF4, y + 0xC, data_ov114_020e6148.f514_b * 3 + 0x15, 1);
        y += 8;
    }
    func_ov114_020e21b0(0xF4, rem + y + 8, data_ov114_020e6148.f514_b * 3 + 0x14, 1);
    if (rem == 0) {
        return;
    }
    w = 8 - rem;
    func_ov114_020e21b0(0xF4, y - w + 0xC, data_ov114_020e6148.f514_b * 3 + 0x15, 1);
}
