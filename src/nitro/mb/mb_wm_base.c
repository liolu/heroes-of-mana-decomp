#include "m2c.h"

extern M2C_UNK WM_DMA_NO;
s32 WM_SetIndCallback(M2C_UNK *);

s32 WM_SetLifeTime(M2C_UNK *, u16, u16, u16, s32);

M2C_UNK MBi_CheckWmErrcode(M2C_UNK, s32);

extern M2C_UNK mbi_life_frame;
extern M2C_UNK MBi_ParentCallback;

s32 MBi_IsSendEnabled(void) {
    s32 var_r0;
    s32 var_r2;
    s32 var_r3;

    var_r0 = 0;
    var_r3 = 0;
    var_r2 = 0;
    if ((M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), u16 *, 0x528) == 1) &&
        (M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), u8 *, 0x50C) == 0)) {
        var_r3 = 1;
    }
    if ((var_r3 != 0) && (M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), u16 *, 0x526) == 0)) {
        var_r2 = 1;
    }
    if ((var_r2 != 0) && (M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), u16 *, 0x52A) != 0)) {
        var_r0 = 1;
    }
    return var_r0;
}

void MBi_OnInitializeDone(void) {
    MBi_CheckWmErrcode(0x80, WM_SetIndCallback(&MBi_ParentCallback));
    MBi_CheckWmErrcode(0x1D, WM_SetLifeTime(&MBi_ParentCallback, M2C_FIELD(&mbi_life_frame, u16 *, 6),
                                            M2C_FIELD(&mbi_life_frame, u16 *, 2), M2C_FIELD(&mbi_life_frame, u16 *, 0),
                                            (s32) M2C_FIELD(&mbi_life_frame, u16 *, 4)));
}
