#include "m2c.h"

M2C_UNK WMi_SetCallbackTable(M2C_UNK, M2C_UNK);

s32 WMi_SendCommand(M2C_UNK, M2C_UNK);

s32 WMi_CheckStateEx(M2C_UNK, M2C_UNK);

s32 WM_Disable(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = WMi_CheckStateEx(1, 1);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    WMi_SetCallbackTable(4, arg0);
    var_r0 = WMi_SendCommand(4, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}

s32 WM_PowerOn(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = WMi_CheckStateEx(1, 1);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    WMi_SetCallbackTable(5, arg0);
    var_r0 = WMi_SendCommand(5, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}

s32 WM_PowerOff(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = WMi_CheckStateEx(1, 2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    WMi_SetCallbackTable(6, arg0);
    var_r0 = WMi_SendCommand(6, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
