#include "m2c.h"

M2C_UNK func_ov117_020ebe10(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_ov117_020f23e0;

void func_ov117_020e7af0(s32 arg0) {
    M2C_FIELD(&data_ov117_020f23e0, s32 *, 0) = 0x250;
    M2C_FIELD(&data_ov117_020f23e0, s32 *, 8) = 0x530;
    func_ov117_020ebe10(2, arg0 + 2, 0x25, 0, 0, 0xC);
}
