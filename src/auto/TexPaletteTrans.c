/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DC_FlushAll();                              /* extern */
M2C_UNK GX_BeginLoadTexPltt();                      /* extern */
M2C_UNK GX_EndLoadTexPltt();                        /* extern */
M2C_UNK TexPaletteTransSub(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a8894;

void TexPaletteTrans(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x4B0) != 0) {
        GX_BeginLoadTexPltt();
        DC_FlushAll();
        TexPaletteTransSub(M2C_FIELD(data_ov000_02051548, s32 *, 0x4B0));
        GX_EndLoadTexPltt();
        M2C_FIELD(data_ov000_02051548, s32 *, 0x4B0) = 0;
    }
}
