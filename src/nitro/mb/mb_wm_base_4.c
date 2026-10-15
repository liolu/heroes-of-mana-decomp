#include "m2c.h"

M2C_UNK MBi_StartParentCore();

extern M2C_UNK WM_DMA_NO;
s32 WM_Reset(s32);

M2C_UNK MBi_CheckWmErrcode(M2C_UNK, s32);
M2C_UNK MBi_CallReset();

void MB_StartParentFromIdle(s32 arg0) {
    M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 0xC), s32 *, 0x1320) = 1;
    MBi_StartParentCore(arg0);
}

s32 MBi_CallReset(void) {
    s32 var_r4;

    var_r4 = WM_Reset(M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), s32 *, 0x508));
    MBi_CheckWmErrcode(1, var_r4);
    if (var_r4 == 2) {
        var_r4 = 0;
    }
    return var_r4;
}

void MBi_OnReset(void) {
    MBi_CallReset();
}
