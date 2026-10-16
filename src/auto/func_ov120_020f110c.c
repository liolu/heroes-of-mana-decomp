#include "m2c.h"

s32 G2S_GetBG2ScrPtr();                             /* extern */
s32 G2_GetBG2ScrPtr();                              /* extern */
M2C_UNK G2x_SetBlendBrightness_(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK GXx_SetMasterBrightness_(s32, M2C_UNK);     /* extern */
M2C_UNK MIi_CpuCopy16(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0200acd8(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_ov120_020e9c40(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_ov120_020eb0fc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov120_020eb1a0(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov120_020ec734(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_ov120_020f0ee0();                      /* extern */
s32 func_ov120_020f0f78();                          /* extern */
extern M2C_UNK data_ov120_020f46dc;

s32 func_ov120_020f110c(void) {
    s32 temp_r4;
    s32 temp_r5;

    func_ov120_020eb1a0(-6, 1);
    func_ov120_020f0ee0();
    *(s16 *) 0x04000050 = 0;
    G2x_SetBlendBrightness_(0x04000050, 0x1B, -6);
    GXx_SetMasterBrightness_(0x0400006C, 0);
    MIi_CpuCopy16(M2C_FIELD(&data_ov120_020f46dc, s32 *, 0xA1C), G2_GetBG2ScrPtr(), 0x800);
    func_ov120_020e9c40(0, 1, 2, 0, 3);
    M2C_FIELD(&data_ov120_020f46dc, s32 *, 0) = 0x240;
    M2C_FIELD(&data_ov120_020f46dc, s32 *, 0xA14) =
        (s32) ((M2C_FIELD(&data_ov120_020f46dc, s32 *, 0xA14) | 0x200000) & ~0x180000);
    M2C_FIELD((void *) 0x04000048, u16 *, 0)  = (u16) ((M2C_FIELD((void *) 0x04000048, u16 *, 0) & ~0x3F) | 0x1F);
    M2C_FIELD((void *) 0x04000048, u16 *, 2)  = (u16) ((M2C_FIELD((void *) 0x04000048, u16 *, 2) & ~0x3F) | 0x3F);
    M2C_FIELD((void *) 0x04000048, s16 *, -8) = 0x10F0;
    M2C_FIELD((void *) 0x04000048, s16 *, -4) = 0x7098;
    *(s32 *) 0x04000000                       = (*(s32 *) 0x04000000 & ~0xE000) | 0x2000;
    func_ov120_020ec734(2, 0xE, 0x2A, 1, 2, 0);
    temp_r4 = func_ov120_020f0f78();
    *(s32 *) 0x04000000 &= ~0xE000;
    M2C_FIELD(&data_ov120_020f46dc, s32 *, 0xA14) = (s32) (M2C_FIELD(&data_ov120_020f46dc, s32 *, 0xA14) & ~0x200000);
    func_ov120_020f0ee0();
    GXx_SetMasterBrightness_(0x0400006C, -6);
    G2x_SetBlendBrightness_(0x04000050, 0x1B, 0);
    func_0200acd8(0x04000050, 4, 8, 9, 0xE);
    func_ov120_020e9c40(0, 0, 1, 2, 3);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x1F00;
    temp_r5             = G2_GetBG2ScrPtr();
    MIi_CpuCopy16(G2S_GetBG2ScrPtr() + 0x800, temp_r5, 0x800);
    func_ov120_020eb0fc(-6, 1);
    return temp_r4;
}
