/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void mtx_Scale(s32 *m, s32 x, s32 y, s32 z) {
    m[0]  = x;
    m[1]  = 0;
    m[2]  = 0;
    m[3]  = 0;
    m[4]  = y;
    m[5]  = 0;
    m[6]  = 0;
    m[7]  = 0;
    m[8]  = z;
    m[9]  = 0;
    m[10] = 0;
    m[11] = 0;
}
