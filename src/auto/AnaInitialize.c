/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK GX_DispOn();                                /* extern */
M2C_UNK GXx_SetMasterBrightness_(s32, M2C_UNK);     /* extern */
M2C_UNK MIi_CpuClear16(M2C_UNK, s32, M2C_UNK);      /* extern */
M2C_UNK VBlankIntrWait();                           /* extern */
M2C_UNK ResetTexPalMap();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a6220;

void AnaInitialize(void) {
    s32 var_ip;

    var_ip                                       = 0;
    M2C_FIELD(data_ov000_02051548, u16 *, 0x7AC) = 0U;
    if (M2C_FIELD(data_ov000_02051548, u16 *, 0x7AC) != 0) {
        var_ip = 1;
    }
    *(u16 *) 0x04000304                          = (*(u16 *) 0x04000304 & ~0x8000) | (var_ip << 0xF);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x1C)  = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x1C) & ~0x800);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x14)  = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) & ~0xF00);
    M2C_FIELD(data_ov000_02051548, s16 *, 0x258) = 0;
    ResetTexPalMap();
    M2C_FIELD(data_ov000_02051548, s32 *, 0x10) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) & ~0x10000000);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x10) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) & ~0x20000000);
    M2C_FIELD(data_ov000_02051548, s32 *, 0)    = 1;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x18) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x18) & ~3);
    GXx_SetMasterBrightness_(0x0400006C, -0x10);
    GXx_SetMasterBrightness_(0x0400106C, -0x10);
    VBlankIntrWait();
    GX_DispOn();
    *(s32 *) 0x04001000 |= 0x10000;
    MIi_CpuClear16(0, 0x06208000, 0x6000);
}
