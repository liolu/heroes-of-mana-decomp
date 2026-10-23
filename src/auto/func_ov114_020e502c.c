#include "m2c.h"
u8 func_ov114_020e502c(u8 *arg0) {
    u32 i;
    u8 sum = 0;
    u8 t;
    i = 0;
    do {
        t = arg0[i];
        i += 1;
        sum += (u8) (t ^ 0xFF);
    } while (i < 0xE);
    return sum;
}
