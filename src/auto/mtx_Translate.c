/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void mtx_Translate(s32 *m, s32 x, s32 y, s32 z) {
    m[0]  = 0x1000;
    m[1]  = 0;
    m[2]  = 0;
    m[3]  = 0;
    m[4]  = 0x1000;
    m[5]  = 0;
    m[6]  = 0;
    m[7]  = 0;
    m[8]  = 0x1000;
    m[9]  = x;
    m[10] = y;
    m[11] = z;
}
