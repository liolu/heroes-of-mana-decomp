#include "m2c.h"

M2C_UNK DC_InvalidateRange(s32, M2C_UNK);

M2C_UNK WMi_SetCallbackTable(M2C_UNK, M2C_UNK);

s32 WMi_SendCommand(M2C_UNK, M2C_UNK);

void *WMi_GetSystemWork();

s32 WMi_CheckStateEx(M2C_UNK, M2C_UNK, M2C_UNK);

s32 WM_EndMP(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;

    temp_r4 = WMi_GetSystemWork();
    temp_r0 = WMi_CheckStateEx(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    DC_InvalidateRange(M2C_FIELD(temp_r4, void **, 4) + 0xC, 4);
    if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 0xC) == 0) {
        return 3;
    }
    WMi_SetCallbackTable(0x10, arg0);
    var_r0 = WMi_SendCommand(0x10, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
