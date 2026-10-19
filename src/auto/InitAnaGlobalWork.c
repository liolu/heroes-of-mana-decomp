/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK GX_HBlankIntr(M2C_UNK);                     /* extern */
M2C_UNK GX_VBlankIntr(M2C_UNK, u16);                /* extern */
M2C_UNK MIi_CpuClear16(M2C_UNK, void *, M2C_UNK);   /* extern */
M2C_UNK OS_DisableIrqMask(M2C_UNK);                 /* extern */
M2C_UNK OS_EnableIrqMask(s32);                      /* extern */
void *func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
s32 getIconObjAnimeData(M2C_UNK);                   /* extern */
M2C_UNK ReadAreaMapSiteMask();                      /* extern */
extern M2C_UNK data_ov000_020506d8;
extern void *data_ov000_02051548;

void InitAnaGlobalWork(void) {
    u16 temp_r1;
    void *temp_r0;

    OS_DisableIrqMask(3);
    temp_r0             = func_0200ed38(0, -1, 0x7B0);
    data_ov000_02051548 = temp_r0;
    MIi_CpuClear16(0, temp_r0, 0x7B0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x1D0)   = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0)       = 1;
    M2C_FIELD(data_ov000_02051548, void **, 0x2D8) = func_0200ed38(0, -1, 0x1900);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x12C)   = getIconObjAnimeData(0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x130)   = getIconObjAnimeData(1);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x134)   = getIconObjAnimeData(3);
    ReadAreaMapSiteMask();
    M2C_FIELD(data_ov000_02051548, void **, 0x508) = func_0200ed38(0, -1, 0x1900);
    M2C_FIELD(data_ov000_02051548, void **, 0x50C) = func_0200ed38(0, -1, 0x1900);
    MIi_CpuClear16(0, M2C_FIELD(data_ov000_02051548, void **, 0x508), 0x1900);
    MIi_CpuClear16(0, M2C_FIELD(data_ov000_02051548, void **, 0x50C), 0x1900);
    M2C_FIELD(data_ov000_02051548, s16 *, 0x38)    = -1;
    M2C_FIELD(data_ov000_02051548, s32 *, 0xC8)    = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xC8) & ~1);
    M2C_FIELD(data_ov000_02051548, s16 *, 0x3A)    = -1;
    M2C_FIELD(data_ov000_02051548, s16 *, 0x3C)    = 0;
    M2C_FIELD(data_ov000_02051548, s16 *, 0xC0)    = 0;
    M2C_FIELD(data_ov000_02051548, s16 *, 0xC4)    = 0;
    M2C_FIELD(data_ov000_02051548, s16 *, 0xC2)    = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD0)    = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) & ~0x1E000) | 0xA000);
    M2C_FIELD(data_ov000_02051548, s32 *, 0xFC)    = 0;
    M2C_FIELD(data_ov000_02051548, void **, 0x75C) = func_0200ed38(0, -1, 0x1400);
    MIi_CpuClear16(0, M2C_FIELD(data_ov000_02051548, void **, 0x75C), 0x1400);
    OS_EnableIrqMask(0x40003);
    temp_r1             = *(u16 *) 0x04000208;
    *(u16 *) 0x04000208 = 1;
    GX_VBlankIntr(1, temp_r1);
    GX_HBlankIntr(1);
}
