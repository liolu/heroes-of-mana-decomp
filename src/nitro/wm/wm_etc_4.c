#include "m2c.h"

M2C_UNK WMi_SetCallbackTable(M2C_UNK, M2C_UNK);

s32 WMi_SendCommand(M2C_UNK, M2C_UNK, s32);

s32 WMi_CheckIdle();

s32 WM_SetBeaconIndication(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = WMi_CheckIdle();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if ((arg1 != 0) && (arg1 != 1)) {
        return 6;
    }
    WMi_SetCallbackTable(0x19, arg0);
    var_r0 = WMi_SendCommand(0x19, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
