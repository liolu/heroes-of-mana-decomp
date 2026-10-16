#include "m2c.h"

M2C_UNK func_ov117_020e4fa8(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov117_020e4fd8();                      /* extern */
M2C_UNK func_ov117_020e5018(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov117_020f23e0;

void func_ov117_020e7e78(void) {
    M2C_FIELD(&data_ov117_020f23e0, s32 *, 4)   = 1;
    M2C_FIELD(&data_ov117_020f23e0, s32 *, 0xC) = 1;
    func_ov117_020e4fd8();
    if (((u32) (M2C_FIELD(&data_ov117_020f23e0, s32 *, 0xAB0) << 7) >> 0x1F) != 0) {
        func_ov117_020e5018(0xF0, 0x10, 9, 1);
    }
    func_ov117_020e4fa8(0, 0x400);
}
