/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;

void setShadowPol(u32 a, u32 b) {
    u32 r2 = b | (b << 16);
    u32 t;
    u32 s;

    *(volatile u32 *) 0x040004C0 = r2 | 0x8000;
    *(volatile u32 *) 0x040004C4 = r2;
    *(volatile u32 *) 0x040004A8 = 0;
    t                            = *(u32 *) ((u8 *) data_ov000_02051548 + 0x464);
    if (t & 0x10) {
        s = ((t >> 1) & 7) + 8;
    } else {
        s = 16 - ((t >> 1) & 7);
    }
    *(volatile u32 *) 0x040004A4 = (a << 0x18) | 0xB1 | (s << 0x10);
}
