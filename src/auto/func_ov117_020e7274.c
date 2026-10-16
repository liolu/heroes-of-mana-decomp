#include "m2c.h"

M2C_UNK func_ov117_020e5018(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov117_020e57a4(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov117_020f23e0;

void func_ov117_020e7274(void) {
    if (((u32) (M2C_FIELD(&data_ov117_020f23e0, s32 *, 0xAB0) << 7) >> 0x1F) == 0) {
        func_ov117_020e5018(0xF0, 0x10, 9, 1);
    }
    func_ov117_020e5018(0x58, 0x18, 0x53, 1);
    func_ov117_020e5018(0x6C, 0x14, func_ov117_020e57a4(0) + 1, 1);
    func_ov117_020e5018(0x84, 0x14, func_ov117_020e57a4(1) + 3, 1);
    func_ov117_020e5018(0x9C, 0x14, func_ov117_020e57a4(2) + 5, 1);
    func_ov117_020e5018(0xB4, 0x14, func_ov117_020e57a4(3) + 7, 1);
    func_ov117_020e5018(0xD4, 0x14, func_ov117_020e57a4(4) + 0x3C, 1);
}
