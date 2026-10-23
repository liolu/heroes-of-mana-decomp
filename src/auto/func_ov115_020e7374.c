#include "m2c.h"
void func_ov115_020e3700(s32, s32, u16, s32);
void func_ov115_020e7374(u32 num, s32 x, s32 y, s32 nd, s32 skip, s32 col, s32 base) {
    u16 digs[10];
    u32 div;
    s32 last, i;
    if (nd > 8) {
        nd = 8;
    }
    last = nd - 1;
    div  = 1;
    for (i = 0; i < last; i++) {
        div = div * 10;
    }
    for (i = 0; i < nd; i++) {
        u32 q   = num / div;
        digs[i] = q + base;
        num     = num % div;
        div     = div / 10;
    }
    if (skip != 0) {
        last = nd - 1;
        for (i = 0; i < last; i++) {
            if (base != digs[i]) {
                break;
            }
            digs[i] = 0;
        }
    }
    for (i = 0; i < nd; i++) {
        if (digs[i] != 0) {
            func_ov115_020e3700(x, y, digs[i], col);
        }
        x += 8;
    }
}
