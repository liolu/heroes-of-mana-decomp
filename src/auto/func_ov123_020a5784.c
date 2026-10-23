#include "m2c.h"
void func_ov123_020a5784(u32 n, u8 *o) {
    s32 s;
    u32 m;
    s32 i;
    m = ~0u ^ (~0u >> n);
    for (i = 0, s = 0; i < 4; i++, s += 8) {
        o[i] = m >> (24 - s);
    }
}
