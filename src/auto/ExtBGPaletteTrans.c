/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DC_FlushAll();                              /* extern */
M2C_UNK GX_BeginLoadBGExtPltt();                    /* extern */
M2C_UNK GX_EndLoadBGExtPltt();                      /* extern */
M2C_UNK ExtBGPaletteTransSub(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a93e4;

void ExtBGPaletteTrans(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x4B8) != 0) {
        GX_BeginLoadBGExtPltt();
        DC_FlushAll();
        ExtBGPaletteTransSub(M2C_FIELD(data_ov000_02051548, s32 *, 0x4B8));
        GX_EndLoadBGExtPltt();
        M2C_FIELD(data_ov000_02051548, s32 *, 0x4B8) = 0;
    }
}
