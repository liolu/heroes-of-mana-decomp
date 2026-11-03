/* compiler: 2.0/sp1p5 -profile */
/* near start: 5 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct G {
    u8 p[0x290];
    s32 *sh;
    u8 q[0x4c];
    u8 *t;
} G;
extern G *data_ov000_02051548;
extern u8 data_ov003_020abf14;
s32 func_0202d478(s32, s32);

s32 GetCanThroughKai(s32 x, s32 y, s32 mask, s32 sx, s32 sy) {
    G *g;
    s32 lim;
    s32 v;
    s32 i;
    s32 bit;
    u32 *p;
    u32 tb;
    u8 *t;
    u16 off;
    g   = data_ov000_02051548;
    lim = func_0202d478(0x5000, 0x28 << *g->sh);
    if (mask != -1) {
        u32 w = *(u32 *) (g->t + *(u16 *) (g->t + (sy * 0x28 + sx) * 2));
        if (w & 1) {
            return 0;
        }
        w &= ~0xff000000;
        w &= mask;
        if (w != 0) {
            return w;
        }
    }
    t   = g->t;
    off = *(u16 *) (t + (y * 0x28 + x) * 2);
    p   = (u32 *) (t + off);
    tb  = *p;
    p++;
    bit = 1;
    for (i = 0; i < 0x18; i++, bit <<= 1) {
        if (tb & bit) {
            if (mask & bit) {
                v = *p;
                break;
            }
            p++;
        }
    }
    if (i == 0x18) {
        return 0;
    }
    off = *(u16 *) (t + (sy * 0x28 + sx) * 2);
    tb  = *(u32 *) (t + off);
    if (tb & 1) {
        return 0;
    }
    p   = (u32 *) (t + off + 4);
    bit = 1;
    for (i = 0; i < 0x18; i++, bit <<= 1) {
        if (tb & bit) {
            s32 d = v - *p;
            if (d < 0) {
                d = -d;
            }
            if (d < lim) {
                return bit;
            }
            p++;
        }
    }
    return 0;
}
