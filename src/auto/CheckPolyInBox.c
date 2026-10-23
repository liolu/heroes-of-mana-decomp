/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
s32 G3X_GetBoxTestResult(s32 *);
void G3_LoadMtx43(s32);
typedef struct {
    s32 pad[3];
    s32 x0, y0, z0, x1, y1, z1;
} Box;
s32 CheckPolyInBox(Box *b, s32 m) {
    s32 res;
    s16 p[6];
    volatile u32 *geo = (volatile u32 *) 0x040004A4;
    s32 a, x0, x1, y0, y1, z0, z1;
    x1 = b->x1;
    x0 = b->x0;
    if (x0 < x1) {
        p[0] = x0 - 0x199;
    } else {
        p[0] = x1 - 0x199;
    }
    y1 = b->y1;
    y0 = b->y0;
    if (y0 < y1) {
        p[1] = y0 - 0x199;
    } else {
        p[1] = y1 - 0x199;
    }
    z1 = b->z1;
    z0 = b->z0;
    if (z0 < z1) {
        p[2] = z0 - 0x199;
    } else {
        p[2] = z1 - 0x199;
    }
    a = x1 - x0;
    if (a < 0) {
        a = -a;
    }
    p[3] = a + 0x333;
    a    = y1 - y0;
    if (a < 0) {
        a = -a;
    }
    p[4] = a + 0x333;
    a    = z1 - z0;
    if (a < 0) {
        a = -a;
    }
    p[5]                         = a + 0x333;
    *(volatile u32 *) 0x04000440 = 1;
    G3_LoadMtx43(m);
    geo[0]    = 0x30C1;
    geo[0x17] = 0;
    geo[0x18] = 0;
    geo[0x47] = *(u32 *) &p[0];
    geo[0x47] = *(u32 *) &p[2];
    geo[0x47] = *(u32 *) &p[4];
    while (G3X_GetBoxTestResult(&res) != 0) {
    }
    return res != 0;
}
