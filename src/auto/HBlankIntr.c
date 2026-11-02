/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 SDK_AUTOLOAD_DTCM_START[];

void HBlankIntr(void) {
    u8 *p;
    p = (u8 *) &SDK_AUTOLOAD_DTCM_START;
    (void) *(volatile u16 *) 0x4000006;
    *(volatile u32 *) (p + 0x3ff8) |= 2;
}
