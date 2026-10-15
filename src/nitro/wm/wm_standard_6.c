#include "m2c.h"

M2C_UNK WMi_SetCallbackTable(M2C_UNK, M2C_UNK);

s32 WMi_SendCommand(M2C_UNK, M2C_UNK);

s32 WMi_CheckStateEx(M2C_UNK, M2C_UNK);

s32 WM_EndParent(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = WMi_CheckStateEx(1, 7);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    WMi_SetCallbackTable(9, arg0);
    var_r0 = WMi_SendCommand(9, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
