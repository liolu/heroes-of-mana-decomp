#include "m2c.h"

void func_ov122_02054e24(s32, s32, u16, s32);

void func_ov122_02054934(u32 val, s32 pos, s32 b, s32 digits, s32 strip, s32 e) {
    u16 buf[10];
    u32 div;
    s32 n;
    s32 i;
    s32 m;
    if (digits > 8) {
        digits = 8;
    }
    n   = digits - 1;
    div = 1;
    i   = 0;
    if (n > 0) {
        do {
            i++;
            div *= 10;
        } while (i < n);
    }
    i = 0;
    if (digits > 0) {
        do {
            buf[i] = val / div + 0x68;
            val    = val % div;
            i++;
            div = div / 10;
        } while (i < digits);
    }
    if (strip != 0) {
        m = digits - 1;
        i = 0;
        if (m > 0) {
            do {
                if (buf[i] != 0x68) {
                    break;
                }
                buf[i] = 0;
                i++;
            } while (i < m);
        }
    }
    i = 0;
    if (digits <= 0) {
        return;
    }
    do {
        if (buf[i] != 0) {
            func_ov122_02054e24(pos, b, buf[i], e);
        }
        i++;
        pos += 0x20;
    } while (i < digits);
}
