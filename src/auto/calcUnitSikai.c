/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_0203673c;
u32 calcUnitSikai(u32 *a) {
    u32 idx = (*a << 21) >> 23;
    u8 *t   = *(u8 **) (data_0203673c + 4);
    u32 e   = *(u32 *) (t + idx * 32 + 8);
    return (e << 14) >> 28;
}
