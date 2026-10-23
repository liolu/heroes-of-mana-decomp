/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void ObjAZtoAreaAZ(s32 *a, s32 *b) {
    *a = (*a + 0x50000) / 0x4000;
    *b = (*b + 0x50000) / 0x4000;
}
