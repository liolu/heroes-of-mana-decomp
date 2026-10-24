/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void Set3DDefaultMaterial(s32 a, s32 b) {
    *(volatile u32 *) 0x040004c0 = 0x21085ef7 | ((a != 0) << 15);
    *(volatile u32 *) 0x040004c4 = 0x7fff | ((b != 0) << 15);
}
