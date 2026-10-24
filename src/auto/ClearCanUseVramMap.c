/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_ov000_0205154c;
void ClearCanUseVramMap(s32 n) {
    u16 i;
    for (i = 0; i < 0x80; i++) {
        data_ov000_0205154c[n * 0x4B0 + 0x580 + i] = 0;
    }
}
