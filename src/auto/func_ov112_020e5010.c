/* near start: 1 diffs with profile "2.0/sp1p5" */
#include "m2c.h"
extern void func_ov112_020e3c44(s32, s32, s32, s32);

void func_ov112_020e5010(u32 num, s32 x, s32 c, s32 n, s32 flag, s32 arg5, s32 type) {
    u16 buf[10];
    s32 base;
    u32 d;
    s32 e;
    s32 i;
    switch (type) {
        case 0:
            base = 0x67;
            break;
        case 1:
            base = 0x4b;
            break;
        case 2:
            base = 0x72;
            break;
    }
    if (n > 8) {
        n = 8;
    }
    e = n - 1;
    d = 1;
    for (i = 0; i < e; i++) {
        d *= 10;
    }
    for (i = 0; i < n; i++) {
        {
            u32 q  = num / d;
            buf[i] = q + base;
        }
        num = num % d;
        d   = d / 10;
    }
    if (flag != 0) {
        e = n - 1;
        for (i = 0; i < e; i++) {
            if (base != buf[i]) {
                break;
            }
            buf[i] = 0;
        }
    }
    for (i = 0; i < n; i++) {
        if (buf[i] != 0) {
            func_ov112_020e3c44(x, c, buf[i], arg5);
        }
        x += 8;
    }
}
