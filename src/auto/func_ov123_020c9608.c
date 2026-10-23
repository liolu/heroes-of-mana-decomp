/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct B {
    u8 pad[4];
    s16 cnt;
    u16 max;
    u8 idx;
    u8 flag;
} B;
typedef struct T4 {
    u8 v[4];
} T4;
typedef struct T4s {
    s8 v[4];
} T4s;
typedef struct T8 {
    T4 a;
    T4s b;
} T8;

void G2x_ChangeBlendBrightness_(s32, s32);
s32 func_02008fb4(s32, s32);
void func_ov123_020cb5f8(s32, s32);
extern u8 data_ov123_020d8444[];
extern u8 data_ov123_020d8448[];
extern B *data_ov123_020e4720;

void func_ov123_020c9608(s32 a, B *b) {
    T8 sp;
    s32 r;
    s32 t;
    sp.a   = *(T4 *) data_ov123_020d8448;
    sp.b   = *(T4s *) data_ov123_020d8444;
    b->cnt = b->cnt + 1;
    r      = func_02008fb4(b->cnt * 16, b->max);
    t      = sp.a.v[b->idx];
    if (t & 1) {
        r = 16 - r;
    }
    if (t & 0x10) {
        r = -r;
    }
    if (b == data_ov123_020e4720) {
        G2x_ChangeBlendBrightness_(0x04001050, r);
    } else {
        G2x_ChangeBlendBrightness_(0x04000050, r);
    }
    if (b->cnt < b->max) {
        return;
    }
    if (b == data_ov123_020e4720) {
        G2x_ChangeBlendBrightness_(0x04001050, sp.b.v[b->idx]);
    } else {
        G2x_ChangeBlendBrightness_(0x04000050, sp.b.v[b->idx]);
    }
    b->flag = 0;
    func_ov123_020cb5f8(1, a);
}
