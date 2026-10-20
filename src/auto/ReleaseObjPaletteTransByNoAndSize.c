/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ReleaseObjPaletteTransSubByNoAndSize(void *, s32, s32);      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a94b4;

void ReleaseObjPaletteTransByNoAndSize(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r2;

    temp_r0 = arg0;
    temp_r2 = arg1;
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x4BC) != 0) {
        ReleaseObjPaletteTransSubByNoAndSize(data_ov000_02051548 + 0x4BC, temp_r0, temp_r2);
    }
}
