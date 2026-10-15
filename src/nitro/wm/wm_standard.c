#include "m2c.h"

M2C_UNK WMi_SetCallbackTable(M2C_UNK, M2C_UNK);

s32 WMi_SendCommand(M2C_UNK, M2C_UNK, s32, s32, s32);

void *WMi_GetSystemWork();

s32 WMi_CheckStateEx(M2C_UNK, M2C_UNK);

s32 WM_Enable(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = WMi_CheckStateEx(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    WMi_SetCallbackTable(3, arg0);
    temp_r0_2 = WMi_GetSystemWork();
    var_r0    = WMi_SendCommand(3, 3, M2C_FIELD(temp_r0_2, s32 *, 0), M2C_FIELD(temp_r0_2, s32 *, 4),
                                M2C_FIELD(temp_r0_2, s32 *, 0x10));
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
