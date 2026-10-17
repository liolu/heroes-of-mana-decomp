#include "m2c.h"

M2C_UNK func_ov117_020ebe74(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
M2C_UNK func_ov117_020ebff8(M2C_UNK, s32, u8, M2C_UNK, s32, M2C_UNK *); /* extern */
extern s32 data_ov117_020f0ee4;
extern s16 data_ov117_020f1310;
extern M2C_UNK data_ov117_020f23e0;
extern M2C_UNK data_ov117_020f2b74;
extern M2C_UNK data_ov117_020f2c74;

void func_ov117_020e7948(s32 arg0) {
    s32 var_r8;
    s32 var_r9;

    M2C_FIELD(&data_ov117_020f23e0, s32 *, 0xC) = (s32) ((u8 *) arg0 + 0x6C0);
    func_ov117_020ebe74(0x10, 0x10, 0x10, 0, 1, &data_ov117_020f2c74);
    M2C_FIELD(&data_ov117_020f23e0, s32 *, 0xC) = (s32) ((u8 *) arg0 + 0x6E0);
    func_ov117_020ebff8(0x8D, 0x4A, M2C_FIELD((data_ov117_020f0ee4 + (data_ov117_020f1310 * 0x14)), u8 *, 8), 0, 1,
                        &data_ov117_020f2b74);
    var_r8 = 0;
    var_r9 = 0x7A;
    do {
        M2C_FIELD(&data_ov117_020f23e0, s32 *, 0xC) = (s32) (arg0 + (((var_r8 + 2) << 5) + 0x6C0));
        func_ov117_020ebff8(0x8D, var_r9, M2C_FIELD((var_r8 + (data_ov117_020f0ee4 + (data_ov117_020f1310 * 0x14))), u8 *, 9),
                            0, 1, (u8 *) &data_ov117_020f2b74 + ((var_r8 + 1) << 6));
        var_r8 += 1;
        var_r9 += 0x18;
    } while (var_r8 < 3);
}
