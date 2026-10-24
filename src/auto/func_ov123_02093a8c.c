#include "m2c.h"

typedef struct {
    u8 p0[0x444];
    u8 f[0xcb0 - 0x444];
    u64 t;
    u8 p1[0xd0c - 0xcb8];
    u8 b0c;
    u8 p2[6];
    u8 b13;
} A;
u64 func_0200f510(void);
int func_ov123_02073a0c(void);
void func_ov123_02093790(A *);

int func_ov123_02093a8c(A *a) {
    u64 d;
    if (func_ov123_02073a0c() != 0) {
        func_ov123_02093790(a);
        if (((u32) (a->b0c << 26) >> 30) == 1) {
            return 0xf;
        }
        return 0xd;
    }
    d = (func_0200f510() - a->t) * 64 / 0x1ff6210;
    if (d < 10) {
        return 0xc;
    }
    a->f[a->b13 * 4] = 1;
    return 0xb;
}
