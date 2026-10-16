#include "m2c.h"

s32 G2S_GetBG2ScrPtr();                             /* extern */
s32 G2_GetBG2ScrPtr();                              /* extern */
M2C_UNK G2x_SetBlendBrightness_(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK GXx_SetMasterBrightness_(s32, M2C_UNK);     /* extern */
M2C_UNK MIi_CpuCopy16(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0200acd8(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_ov121_020e9ac8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_ov121_020eb5a4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_ov121_020ec628(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov121_020ec6cc(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov121_020f2b54();                      /* extern */
s32 func_ov121_020f2c54(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov121_020f6d60;

s32 func_ov121_020f30bc(void) {
    s32 temp_r4;
    s32 temp_r5;

    func_ov121_020ec6cc(-6, 1, 2);
    func_ov121_020f2b54();
    *(s16 *) 0x04000050 = 0;
    G2x_SetBlendBrightness_(0x04000050, 0x1B, -6);
    GXx_SetMasterBrightness_(0x0400006C, 0);
    MIi_CpuCopy16(M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA54), G2_GetBG2ScrPtr(), 0x800);
    func_ov121_020e9ac8(0, 1, 2, 0, 3);
    M2C_FIELD(&data_ov121_020f6d60, s32 *, 0) = 0x280;
    M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA48) =
        (s32) ((M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA48) | 0x40000000) & ~0x30000000);
    M2C_FIELD((void *) 0x04000048, u16 *, 0)  = (u16) ((M2C_FIELD((void *) 0x04000048, u16 *, 0) & ~0x3F) | 0x1F);
    M2C_FIELD((void *) 0x04000048, u16 *, 2)  = (u16) ((M2C_FIELD((void *) 0x04000048, u16 *, 2) & ~0x3F) | 0x3F);
    M2C_FIELD((void *) 0x04000048, s16 *, -8) = 0x10F0;
    M2C_FIELD((void *) 0x04000048, s16 *, -4) = 0x7098;
    *(s32 *) 0x04000000                       = (*(s32 *) 0x04000000 & ~0xE000) | 0x2000;
    func_ov121_020eb5a4(2, 0xE, 0x2A, 1, 2, 0);
    temp_r4                                       = func_ov121_020f2c54(0);
    M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA48) = (s32) (M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA48) & ~0x40000000);
    *(s32 *) 0x04000000 &= ~0xE000;
    func_ov121_020f2b54();
    GXx_SetMasterBrightness_(0x0400006C, -6);
    G2x_SetBlendBrightness_(0x04000050, 0x1B, 0);
    func_0200acd8(0x04000050, 4, 8, 9, 0xE);
    func_ov121_020e9ac8(0, 0, 1, 2, 3);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x1F00;
    temp_r5             = G2_GetBG2ScrPtr();
    MIi_CpuCopy16(G2S_GetBG2ScrPtr() + 0x800, temp_r5, 0x800);
    func_ov121_020ec628(-6, 1, 2);
    return temp_r4;
}
