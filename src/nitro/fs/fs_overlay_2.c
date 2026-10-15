#include "m2c.h"

M2C_UNK DC_InvalidateRange(s32, s32);

M2C_UNK IC_InvalidateRange(s32, s32);

M2C_UNK MI_CpuFill8(s32, M2C_UNK, s32);

void FS_ClearOverlayImage(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    temp_r6 = temp_r5 + M2C_FIELD(arg0, s32 *, 0xC);
    IC_InvalidateRange(temp_r4, temp_r6);
    DC_InvalidateRange(temp_r4, temp_r6);
    MI_CpuFill8(temp_r4 + temp_r5, 0, temp_r6 - temp_r5);
}
