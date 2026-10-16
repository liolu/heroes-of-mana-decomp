#include "m2c.h"

M2C_UNK func_ov121_020ec6cc(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov121_020f15c4(M2C_UNK);               /* extern */
extern M2C_UNK data_ov121_020f6d60;

void func_ov121_020f34dc(void) {
    M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA4C) = (s32) ((M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA4C) & ~1) | 1);
    func_ov121_020ec6cc(-0x10, 3, 1);
    func_ov121_020f15c4(0);
    M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA4C) = (s32) (M2C_FIELD(&data_ov121_020f6d60, s32 *, 0xA4C) & ~1);
}
