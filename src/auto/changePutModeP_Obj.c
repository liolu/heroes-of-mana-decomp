/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 w;
    u32 p;
    u32 w8;
    u8 q[0xa0];
    volatile u32 *px;
} O;
void changePutModeP_Obj(O *o, u32 m) {
    o->w = (o->w & ~0x38) | ((m << 29) >> 26);
    if (m == 1 && ((o->w8 << 2) >> 31) != 0) {
        *o->px = (*o->px & ~1) | 1;
    }
}
