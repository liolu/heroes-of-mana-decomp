#include "m2c.h"

M2C_UNK WM_SetIndCallback(s32);

s32 WM_Initialize(s32, s32, u16);

M2C_UNK MBi_OnInitializeDone();

M2C_UNK MBi_SetMaxScanTime(M2C_UNK);

extern M2C_UNK WM_DMA_NO;

s32 MBi_StartCommon(void) {
    s32 temp_r0;

    M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), s16 *, 0x528) = 0;
    M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), s16 *, 0x52A) = 0;
    M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), s16 *, 0x526) = 0;
    M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), s16 *, 0x548) = 0;
    MBi_SetMaxScanTime(0xA);
    if (M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 0xC), s32 *, 0x1320) == 0) {
        do {
            temp_r0 =
                WM_Initialize(M2C_FIELD(&WM_DMA_NO, s32 *, 4), M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), s32 *, 0x508),
                              M2C_FIELD(&WM_DMA_NO, u16 *, 0));
        } while (temp_r0 == 4);
        if (temp_r0 != 2) {
            return 8;
        }
        WM_SetIndCallback(M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), s32 *, 0x508));
        M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), s8 *, 0x50D) = 1;
        return 0;
    }
    WM_SetIndCallback(M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), s32 *, 0x508));
    M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), s8 *, 0x50D) = 1;
    MBi_OnInitializeDone();
    return 0;
}
