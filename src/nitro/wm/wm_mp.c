#include "m2c.h"

M2C_UNK DC_InvalidateRange(void *, M2C_UNK);

M2C_UNK DC_StoreRange(s32, s32);

s32 WMi_SendCommand(M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32);

void *WMi_GetSystemWork();

s32 WMi_CheckStateEx(M2C_UNK, M2C_UNK, M2C_UNK);

s32 WM_SetMPDataToPortEx(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4, u16 arg5, u16 arg6) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r7;
    u16 temp_r4;
    u16 var_r5;
    void *temp_r6;

    var_r5  = 1;
    temp_r6 = M2C_FIELD(WMi_GetSystemWork(), void **, 4);
    temp_r0 = WMi_CheckStateEx(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    DC_InvalidateRange(temp_r6 + 0x3C, 2);
    temp_r4 = M2C_FIELD(temp_r6, u16 *, 0x3C);
    DC_InvalidateRange(temp_r6 + 0x188, 2);
    if (M2C_FIELD(temp_r6, u16 *, 0x188) == 0) {
        var_r7 = 1;
    } else {
        var_r7 = 0;
    }
    if (var_r7 == 1) {
        DC_InvalidateRange(temp_r6 + 0x182, 2);
        var_r5 = M2C_FIELD(temp_r6, u16 *, 0x182);
        DC_InvalidateRange(temp_r6 + 0x86, 2);
    }
    if (arg2 == 0) {
        return 6;
    }
    if (var_r5 == 0) {
        return 7;
    }
    DC_InvalidateRange(temp_r6 + 0x7C, 2);
    if (arg2 == M2C_FIELD(temp_r6, s32 *, 0x7C)) {
        return 6;
    }
    if (var_r7 != 0) {
        var_r0_2 = 4;
    } else {
        var_r0_2 = 2;
    }
    if ((s32) (arg3 + var_r0_2) > (s32) temp_r4) {
        return 6;
    }
    if (arg3 == 0) {
        return 6;
    }
    DC_StoreRange(arg2, arg3);
    var_r0 = WMi_SendCommand(0xF, 7, arg2, arg3, (s32) arg4, (s32) arg5, (s32) arg6, arg0, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
