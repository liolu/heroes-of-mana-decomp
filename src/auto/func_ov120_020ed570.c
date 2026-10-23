#include "m2c.h"
void func_ov120_020ec2ac(s32, s32, s32, s32);
void func_ov120_020ed570(u32 val, s32 x, s32 y, s32 count, s32 flag, s32 arg, s32 base) {
    u16 digits[10];
    u32 pow;
    s32 i;
    s32 n;
    u32 q;
    n = count;
    if (n > 8) {
        n = 8;
    }
    pow = 1;
    for (i = 0; i < n - 1; i++) {
        pow *= 10;
    }
    for (i = 0; i < n; i++) {
        q         = val / pow;
        digits[i] = q + base;
        val       = val % pow;
        pow       = pow / 10;
    }
    if (flag != 0) {
        for (i = 0; i < n - 1; i++) {
            if (base != digits[i]) {
                break;
            }
            digits[i] = 0;
        }
    }
    for (i = 0; i < n; i++) {
        if (digits[i] != 0) {
            func_ov120_020ec2ac(x, y, digits[i], arg);
        }
        x += 8;
    }
}
