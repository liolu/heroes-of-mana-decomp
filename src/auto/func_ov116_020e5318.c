#include "m2c.h"
extern void func_ov116_020e2870(s32, s32, s32, s32);

void func_ov116_020e5318(u32 val, s32 x, s32 y, s32 n, s32 blank, s32 arg, s32 base) {
    u16 buf[10];
    u32 div;
    s32 last;
    s32 i;
    if (n > 8) {
        n = 8;
    }
    last = n - 1;
    div  = 1;
    for (i = 0; i < last; i++) {
        div *= 10;
    }
    for (i = 0; i < n; i++) {
        {
            s32 q  = val / div;
            buf[i] = q + base;
        }
        val = val % div;
        div = div / 10;
    }
    if (blank != 0) {
        last = n - 1;
        for (i = 0; i < last; i++) {
            if (base != buf[i]) {
                break;
            }
            buf[i] = 0;
        }
    }
    for (i = 0; i < n; i++) {
        if (buf[i] != 0) {
            func_ov116_020e2870(x, y, buf[i], arg);
        }
        x += 8;
    }
}
