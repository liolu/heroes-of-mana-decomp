#include "m2c.h"
extern void func_ov114_020e21b0(s32, s32, s32, s32);

void func_ov114_020e3be8(u32 val, s32 x, s32 y, s32 n, s32 blank, s32 arg) {
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
        buf[i] = val / div + 0x1c;
        val    = val % div;
        div    = div / 10;
    }
    if (blank != 0) {
        last = n - 1;
        for (i = 0; i < last; i++) {
            if (buf[i] != 0x1c) {
                break;
            }
            buf[i] = 0;
        }
    }
    for (i = 0; i < n; i++) {
        if (buf[i] != 0) {
            func_ov114_020e21b0(x, y, buf[i], arg);
        }
        x += 8;
    }
}
