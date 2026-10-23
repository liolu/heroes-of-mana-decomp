/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
u8 **SearchObjPalSub(u8 **a, s32 b, u32 c) {
    u8 *p = *a;
    if (p == 0) {
        return 0;
    }
    if (*(u16 *) p == b && ((u32) (*(u16 *) (p + 2) << 16) >> 30) == c) {
        return a;
    }
    return SearchObjPalSub((u8 **) (p + 0xc), b, c);
}
