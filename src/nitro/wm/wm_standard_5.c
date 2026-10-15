#include "m2c.h"

M2C_UNK WMi_SetCallbackTable(M2C_UNK, M2C_UNK);

s32 WMi_SendCommand(M2C_UNK, M2C_UNK, M2C_UNK);

void *WMi_GetSystemWork();

s32 WMi_CheckStateEx(M2C_UNK, M2C_UNK);
M2C_UNK WMi_StartParentEx(M2C_UNK, M2C_UNK);

s32 WmCheckParentParameter(void *arg0) {
    u16 temp_r0;
    u16 temp_r1;

    if ((u32) M2C_FIELD(arg0, u16 *, 4) > 0x70U) {
        return 0;
    }
    temp_r1 = M2C_FIELD(arg0, u16 *, 0x18);
    if (((u32) temp_r1 < 0xAU) || ((u32) temp_r1 > 0x3E8U)) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x32);
    if (((u32) temp_r0 < 1U) || ((u32) temp_r0 > 0xEU)) {
        return 0;
    }
    return 1;
}

s32 WMi_StartParentEx(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = WMi_CheckStateEx(1, 2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    temp_r0_2                          = WMi_GetSystemWork();
    M2C_FIELD(temp_r0_2, s16 *, 0x150) = 0;
    M2C_FIELD(temp_r0_2, s32 *, 0x14C) = 0;
    WMi_SetCallbackTable(8, arg0);
    var_r0 = WMi_SendCommand(8, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}

void WM_StartParent(M2C_UNK arg0) {
    WMi_StartParentEx(arg0, 1);
}
