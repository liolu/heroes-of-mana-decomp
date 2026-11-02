/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u32 *data_ov000_02051548;

void MTG_SaveParaReset(void) {
    s32 i;

    for (i = 0; i < 0xB; i++) {
        ((u32 *) ((u8 *) data_ov000_02051548 + 0x40))[i] = 0;
    }
    *(u32 *) ((u8 *) data_ov000_02051548 + 0x8C) = 0;
    for (i = 0x15; i < 0x18; i++) {
        ((u32 *) ((u8 *) data_ov000_02051548 + 0x40))[i] = 0;
    }
    for (i = 0x1A; i < 0x1E; i++) {
        ((u32 *) ((u8 *) data_ov000_02051548 + 0x40))[i] = 0;
    }
}
