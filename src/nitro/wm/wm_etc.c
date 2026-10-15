#include "m2c.h"

M2C_UNK DC_StoreRange(s32, M2C_UNK);

M2C_UNK WMi_SetCallbackTable(M2C_UNK, M2C_UNK);

s32 WMi_SendCommand(M2C_UNK, M2C_UNK, u32, s32);

s32 WMi_CheckIdle();

s32 WM_SetWEPKey(M2C_UNK arg0, u32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = WMi_CheckIdle();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 > 3U) {
        return 6;
    }
    if (arg1 != 0) {
        if (arg2 == 0) {
            return 6;
        }
        DC_StoreRange(arg2, 0x50);
        goto block_8;
    }
block_8:
    WMi_SetCallbackTable(0x14, arg0);
    var_r0 = WMi_SendCommand(0x14, 2, arg1, arg2);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
