/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern s32 data_ov000_02051548;

void ClearDropItemExist(void) {
    s32 n;
    s32 off;
    u8 *p;

    n   = 0;
    off = 0;
    do {
        n += 1;
        p                  = (u8 *) (data_ov000_02051548 + 0xE4);
        *(u32 *) (p + off) = *(u32 *) (p + off) & 0x7FFFFFFF;
        off += 4;
    } while (n < 3);
}
