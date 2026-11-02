/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern u8 *data_0203673c;

void SetClearShipSortieTiming(void) {
    s32 n;
    s32 *p;

    n = 0;
    p = *(s32 **) (data_0203673c + 0x28);
    do {
        n += 1;
        if (((u32) (*p << 15) >> 31) != 0) {
            *p = *p & ~0x400000;
        }
        p = (s32 *) ((u8 *) p + 0x2D0);
    } while (n < 4);
}
