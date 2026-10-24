/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
} Col;
extern s64 func_0202d478(s32, s32);

void UpDownColor(Col *src, Col *dst, s32 x, s32 amt) {
    Col tmp;
    s32 i;
    s32 add;
    s32 r;
    s32 g;
    s32 b;
    add = func_0202d478(x, amt < 0 ? -amt : amt) >> 32;
    if ((s32) func_0202d478(x, amt < 0 ? -amt : amt) & 1) {
        add = (amt < 0 ? -amt : amt) - add;
    }
    if (amt < 0) {
        add = -add;
    }
    src++;
    dst++;
    for (i = 0; i < 15; i++, src++, dst++) {
        r = add + src->r;
        if (r < 0) {
            r = 0;
        } else if (r > 0x1f) {
            r = 0x1f;
        }
        g = add + src->g;
        if (g < 0) {
            g = 0;
        } else if (g > 0x1f) {
            g = 0x1f;
        }
        b = add + src->b;
        if (b < 0) {
            b = 0;
        } else if (b > 0x1f) {
            b = 0x1f;
        }
        tmp.r = (u16) r;
        tmp.g = (u16) g;
        tmp.b = (u16) b;
        *dst  = tmp;
    }
}
