/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DC_FlushAll();                              /* extern */
M2C_UNK ObjPaletteTransSub(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a945c;

void ObjPaletteTrans(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x4BC) != 0) {
        DC_FlushAll();
        ObjPaletteTransSub(M2C_FIELD(data_ov000_02051548, s32 *, 0x4BC));
        M2C_FIELD(data_ov000_02051548, s32 *, 0x4BC) = 0;
    }
}
