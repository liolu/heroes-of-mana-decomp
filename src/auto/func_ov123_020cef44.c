#include "m2c.h"

extern u16 data_ov123_020d8468[];

u16 func_ov123_020cef44(s32 c) {
    u16 i;
    u16 k;
    s32 n;

    if (c == 10) {
        return 0xe0e1;
    }
    if (c == 0) {
        return 0xffff;
    }
    if (c == 0x2019) {
        return 0xeb07;
    }
    i = 0;
    k = 0;
    do {
        n = 0;
        do {
            if (c == data_ov123_020d8468[k]) {
                return (i << 8) | (i >> 8);
            }
            n++;
            k++;
            i++;
        } while (n < 10);
        k += 2;
    } while (k < 0x90b);
    return 0;
}
