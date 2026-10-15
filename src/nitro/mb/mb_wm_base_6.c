#include "m2c.h"

extern M2C_UNK WM_DMA_NO;
s32 WM_SetMPDataToPortEx(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32);

M2C_UNK MBi_CheckWmErrcode(M2C_UNK, s32);

void MBi_SetMaxScanTime(s16 arg0) {
    M2C_FIELD(&WM_DMA_NO, s16 *, 0x26) = arg0;
}

s32 MBi_SetMPData(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u16 arg4) {
    s32 temp_r0;

    temp_r0 = WM_SetMPDataToPortEx(arg0, 0, arg1, arg2, (s32) arg4, 1, 3);
    MBi_CheckWmErrcode(0xF, temp_r0);
    return temp_r0;
}
