/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void MakeTexCoord(s32 mode, u8 *p) {
    u32 v;
    switch (mode) {
        case 0:
            v = 0;
            break;
        case 1:
            v = (u16) (s16) (*(u16 *) (p + 0x8a) << 4) << 16;
            break;
        case 2:
            v = (u16) (s16) (*(u16 *) (p + 0x88) << 4) | ((u16) (s16) (*(u16 *) (p + 0x8a) << 4) << 16);
            break;
        case 3:
        default:
            v = (u16) (s16) (*(u16 *) (p + 0x88) << 4);
            break;
    }
    *(volatile u32 *) 0x4000488 = v;
}
