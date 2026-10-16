#include "m2c.h"

s32 G2_GetBG2ScrPtr();                              /* extern */
M2C_UNK G2x_SetBlendBrightness_(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK GXx_SetMasterBrightness_(s32, M2C_UNK);     /* extern */
M2C_UNK MIi_CpuCopy16(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_ov114_020e1ba4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_ov114_020e261c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov114_020e2688();                      /* extern */
s32 func_ov114_020e27d8();                          /* extern */
M2C_UNK func_ov114_020e3110(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_ov114_020e6148;

void func_ov114_020e4ee4(void) {
    func_ov114_020e261c(-6, 1);
    *(s16 *) 0x04000050 = 0;
    G2x_SetBlendBrightness_(0x04000050, 0x1B, -6);
    GXx_SetMasterBrightness_(0x0400006C, 0);
    MIi_CpuCopy16(M2C_FIELD(&data_ov114_020e6148, s32 *, 0x530), G2_GetBG2ScrPtr(), 0x800);
    M2C_FIELD(&data_ov114_020e6148, s32 *, 0) = 0x200;
    func_ov114_020e3110(2, 9, 0x3B, 1, 2, 0);
    func_ov114_020e1ba4(0, 1, 2, 0, 3);
    do {
        func_ov114_020e2688();
    } while (func_ov114_020e27d8() != 0);
}
