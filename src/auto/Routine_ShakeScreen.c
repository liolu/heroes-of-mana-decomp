/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 *data_ov000_02051548;

void Routine_ShakeScreen(s32 a, u16 b) {
    u8 *p;
    u32 t;

    p                                     = data_ov000_02051548;
    t                                     = ((u32) a << 31) >> 22;
    *(u32 *) (p + 0xD0)                   = (*(u32 *) (p + 0xD0) & ~0x200U) | t;
    *(u16 *) (data_ov000_02051548 + 0xC6) = b;
}
