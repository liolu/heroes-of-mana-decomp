#include "m2c.h"

M2C_UNK func_0200e358(M2C_UNK *, s32, M2C_UNK);

M2C_UNK DC_StoreRange(s32, M2C_UNK);

M2C_UNK MI_CpuCopy8(M2C_UNK, s32, M2C_UNK);

s32 func_020118cc(M2C_UNK, s32, M2C_UNK);

s32 WmGetCommandBuffer4Arm7();

extern M2C_UNK bufMsgQ;
extern M2C_UNK wmInitialized;

s32 WMi_SendCommandDirect(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = WmGetCommandBuffer4Arm7();
    if (temp_r0 == 0) {
        return 8;
    }
    MI_CpuCopy8(arg0, temp_r0, arg1);
    DC_StoreRange(temp_r0, arg1);
    temp_r4 = func_020118cc(0xA, temp_r0, 0);
    func_0200e358(&bufMsgQ, temp_r0, 1);
    if (temp_r4 < 0) {
        return 8;
    }
    return 2;
}

s32 WMi_GetSystemWork(void) {
    return M2C_FIELD(&wmInitialized, s32 *, 4);
}
