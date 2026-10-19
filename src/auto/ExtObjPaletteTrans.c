/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DC_FlushAll();                              /* extern */
M2C_UNK GX_BeginLoadOBJExtPltt();                   /* extern */
M2C_UNK GX_EndLoadOBJExtPltt();                     /* extern */
M2C_UNK ExtObjPaletteTransSub(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a9368;

void ExtObjPaletteTrans(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x4B4) != 0) {
        GX_BeginLoadOBJExtPltt();
        DC_FlushAll();
        ExtObjPaletteTransSub(M2C_FIELD(data_ov000_02051548, s32 *, 0x4B4));
        GX_EndLoadOBJExtPltt();
        M2C_FIELD(data_ov000_02051548, s32 *, 0x4B4) = 0;
    }
}
