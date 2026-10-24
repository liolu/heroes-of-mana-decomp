/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void AreaMapScreenXYtoAreaXY(s32 *x, s32 *y) {
    *x = (*x - 0x80) * 0x28 / 192 + 0x14;
    *y = (*y - 0x60) * 0x28 / 192 + 0x14;
}
