#include "m2c.h"

M2C_UNK func_02015f28(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK TrsModeSet(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK data_ov121_020f6d60;
extern M2C_UNK data_ov121_020f77e4;

u32 func_ov121_020ec504(void) {
    s32 temp_r0;
    u32 temp_r0_2;

    temp_r0_2 = (u32) (M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA4C) << 0x1F) >> 0x1F;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 1) {
        return (u32) temp_r0;
    }
    TrsModeSet(7, 0);
    func_02015f28(0xC, 0, 0);
    M2C_FIELD(&data_ov121_020f77e4, s32 *, 4) = 1;
    return (u32) &data_ov121_020f77e4;
}
