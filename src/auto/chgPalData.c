/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
} Col;

s32 func_0202d478(s32, s32);

void chgPalData(Col *src, Col *dst, s32 mul, s32 div) {
    Col c;
    s32 i;
    s32 r;
    s32 g;
    s32 b;
    src++;
    dst++;
    for (i = 0; i < 15; i++) {
        g = func_0202d478(src->g * mul, div);
        b = func_0202d478(src->b * mul, div);
        r = func_0202d478(src->r * mul, div);
        src++;
        c.r  = r;
        c.g  = g;
        c.b  = b;
        *dst = c;
        dst++;
    }
}
