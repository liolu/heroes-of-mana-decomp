/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern s32 data_ov000_0205154c;

s32 countNoUseTexPal(void) {
    s32 count = 0;
    s32 i;

    for (i = 0; i < 0x200; i++) {
        if (!((*(u32 *) ((u8 *) data_ov000_0205154c + (i >> 5) * 4 + 0xAB4)) & (1 << (i & 0x1F)))) {
            count++;
        }
    }
    return count;
}
