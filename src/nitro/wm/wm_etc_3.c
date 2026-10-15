#include "m2c.h"

M2C_UNK DC_StoreRange(M2C_UNK *, u32);

M2C_UNK MIi_CpuCopy16(s32, M2C_UNK *, u32);

M2C_UNK WMi_SetCallbackTable(M2C_UNK, M2C_UNK);

s32 WMi_SendCommand(M2C_UNK, M2C_UNK, M2C_UNK *, u32, s32, s32, s32);

s32 WMi_CheckStateEx(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK tmpUserGameInfoBuf;

s32 WM_SetGameInfo(M2C_UNK arg0, s32 arg1, u32 arg2, s32 arg3, u16 arg4, u8 arg5) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = WMi_CheckStateEx(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 == 0) {
        return 6;
    }
    if (arg2 > 0x70U) {
        return 6;
    }
    MIi_CpuCopy16(arg1, &tmpUserGameInfoBuf, arg2);
    DC_StoreRange(&tmpUserGameInfoBuf, arg2);
    WMi_SetCallbackTable(0x18, arg0);
    var_r0 = WMi_SendCommand(0x18, 5, &tmpUserGameInfoBuf, arg2, arg3, (s32) arg4, (s32) arg5);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
