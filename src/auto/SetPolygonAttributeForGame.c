/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void SetPolygonAttributeForGame(u32 a, u32 b, u32 c) {
    u32 t                       = (c == 0x1f) ? 2 : c;
    *(volatile u32 *) 0x40004a4 = a | (b << 6) | 0x800 | (t << 24) | (c << 16);
}
