#include "m2c.h"

extern M2C_UNK WM_DMA_NO;

s32 MBi_GetGgid(void) {
    return M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), s32 *, 8);
}

u16 MBi_GetTgid(void) {
    return M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), u16 *, 0xC);
}

u8 MBi_GetAttribute(void) {
    s32 var_ip;
    s32 var_r1;
    s32 var_r2;
    s32 var_r3;

    if (M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), u16 *, 0x12) != 0) {
        var_r2 = 2;
    } else {
        var_r2 = 0;
    }
    if (M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), u16 *, 0xE) != 0) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    if (M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), u16 *, 0x14) != 0) {
        var_ip = 4;
    } else {
        var_ip = 0;
    }
    if (M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), u16 *, 0x16) != 0) {
        var_r1 = 8;
    } else {
        var_r1 = 0;
    }
    return (u8) (var_r1 | (var_ip | (var_r3 | var_r2)));
}

s32 MBi_IsStarted(void) {
    if (M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), u8 *, 0x50D) == 1) {
        return 1;
    }
    return 0;
}
