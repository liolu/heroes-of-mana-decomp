#include "m2c.h"

s32 WM_Init(M2C_UNK, M2C_UNK);

M2C_UNK WMi_SetCallbackTable(M2C_UNK, M2C_UNK);

s32 WMi_SendCommand(M2C_UNK, M2C_UNK, s32, s32, s32);

void *WMi_GetSystemWork();

s32 WM_Initialize(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = WM_Init(arg0, arg2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    WMi_SetCallbackTable(0, arg1);
    temp_r0_2 = WMi_GetSystemWork();
    var_r0    = WMi_SendCommand(0, 3, M2C_FIELD(temp_r0_2, s32 *, 0), M2C_FIELD(temp_r0_2, s32 *, 4),
                                M2C_FIELD(temp_r0_2, s32 *, 0x10));
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
