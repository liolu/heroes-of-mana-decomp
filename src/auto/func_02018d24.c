#include "m2c.h"

M2C_UNK DC_InvalidateRange(s32, M2C_UNK);
M2C_UNK MIi_CpuCopyFast(s32, s32, M2C_UNK);
void *WMi_GetSystemWork();
s32 WMi_CheckInitialized();

s32 func_02018d24(s32 arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = WMi_GetSystemWork();
    temp_r0 = WMi_CheckInitialized();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    DC_InvalidateRange(M2C_FIELD(temp_r4, s32 *, 4), 0x7C0);
    MIi_CpuCopyFast(M2C_FIELD(temp_r4, s32 *, 4), arg0, 0x7C0);
    return 0;
}
