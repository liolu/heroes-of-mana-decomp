/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_ov000_0205154c;
void DeleteTexPalMap(u32 a, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        s32 k  = i + (a >> 5);
        u32 *w = (u32 *) (data_ov000_0205154c + (k >> 5) * 4 + 0xab4);
        *w &= ~(1 << (k & 0x1f));
    }
}
