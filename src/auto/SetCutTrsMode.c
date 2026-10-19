/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK SetTrsDataForEtc(s32 *, M2C_UNK);        /* extern */
extern M2C_UNK data_ov000_020505f8;

void SetCutTrsMode(void) {
    s32 sp0;

    sp0 = ((sp0 & ~0x1F) | 0xF) & 0x1F;
    SetTrsDataForEtc(&sp0, 4);
}
