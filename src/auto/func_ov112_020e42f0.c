#include "m2c.h"

s32 WM_GetLinkLevel(s32, u32, u32);                 /* extern */
M2C_UNK func_ov112_020e3c44(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
extern M2C_UNK data_ov112_020ec588;

void func_ov112_020e42f0(s32 arg0) {
    u32 temp_r1;
    u32 temp_r2;

    temp_r2 = (u32) (M2C_FIELD(&data_ov112_020ec588, s32 *, 0x48C) << 0xE) >> 0x1F;
    if (temp_r2 == 0) {
        return;
    }
    temp_r1 = (u32) (M2C_FIELD(&data_ov112_020ec588, s32 *, 0x488) << 0x1F) >> 0x1F;
    if (temp_r1 == arg0) {
        return;
    }
    func_ov112_020e3c44(8, 8, WM_GetLinkLevel(arg0, temp_r1, temp_r2) + 0x97, 1);
}
