/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ReleaseTexPaletteTransSub();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a88b8;

void ReleaseTexPaletteTrans(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x4B0) != 0) {
        ReleaseTexPaletteTransSub();
        M2C_FIELD(data_ov000_02051548, s32 *, 0x4B0) = 0;
    }
}
