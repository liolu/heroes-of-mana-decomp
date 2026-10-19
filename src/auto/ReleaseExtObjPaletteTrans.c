/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ReleaseExtObjPaletteTransSub();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a9394;

void ReleaseExtObjPaletteTrans(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x4B4) != 0) {
        ReleaseExtObjPaletteTransSub();
        M2C_FIELD(data_ov000_02051548, s32 *, 0x4B4) = 0;
    }
}
