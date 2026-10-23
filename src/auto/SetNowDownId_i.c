/* compiler: 1.2/sp3 -profile */
#include "m2c.h"
typedef struct Root {
    u8 pad[0x2e0];
    u8 *tab;
} Root;
extern Root *data_ov000_02051548;
u32 SetNowDownId_i(s32 a, s32 b, u32 c) {
    u32 t;
    u32 low;
    u8 *base;
    u32 acc;
    u32 m;
    u32 bit;
    u32 up;
    u32 w;
    base = data_ov000_02051548->tab;
    w    = *(u32 *) (base + *(u16 *) (base + (a + b * 0x28) * 2));
    m    = c | (c << 1);
    low  = w & m;
    if (low != 0) {
        for (bit = 1; bit != 0; bit <<= 1) {
            t = low & bit;
            if (t != 0) {
                low = t;
                break;
            }
        }
    }
    up  = low;
    acc = 0;
    for (; up != 0; up <<= 1) {
        t = up & w;
        if (t == 0) {
            break;
        }
        acc |= t;
    }
    for (; low != 0; low >>= 1) {
        t = low & w;
        if (t == 0) {
            break;
        }
        acc |= t;
    }
    return acc | (acc << 1) | (acc >> 1);
}
