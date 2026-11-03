/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void MakeTexCoordXYsize(s32 mode, s32 a, s32 b) {
    u32 v;
    s16 y;
    s16 x;
    switch (mode) {
        case 0:
            v = 0;
            break;
        case 1:
            v = (u32) (u16) (s16) (b << 4) << 16;
            break;
        case 2:
            y = b << 4;
            x = a << 4;
            v = (u16) x | ((u32) (u16) y << 16);
            break;
        case 3:
        default:
            v = (u16) (s16) (a << 4);
            break;
    }
    *(volatile u32 *) 0x4000488 = v;
}
