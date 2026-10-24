/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void ChangeXYtoAreaMapScreenXY2(s32 *x, s32 *y) {
    *x = (*x * 0xC0) / 655360 + 0x80;
    *y = (*y * 0xC0) / 655360 + 0x60;
}
