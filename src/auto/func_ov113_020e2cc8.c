#include "m2c.h"

M2C_UNK func_ov113_020e2750(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov113_020e27ac();                      /* extern */
M2C_UNK func_ov113_020e27ec(s32, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov113_020e2c08(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov113_020e4944;

void func_ov113_020e2cc8(void) {
    M2C_FIELD(&data_ov113_020e4944, s32 *, 0) = 0x200;
    M2C_FIELD(&data_ov113_020e4944, s32 *, 8) = 1;
    func_ov113_020e27ac();
    if ((s32) M2C_FIELD(&data_ov113_020e4944, s32 *, 0xA38) < 0x100) {
        func_ov113_020e27ec(M2C_FIELD(&data_ov113_020e4944, s32 *, 0xA38) + 0x80, 0x20, func_ov113_020e2c08(0) + 1, 0);
    }
    if ((s32) M2C_FIELD(&data_ov113_020e4944, s32 *, 0xA3C) < 0x100) {
        func_ov113_020e27ec(M2C_FIELD(&data_ov113_020e4944, s32 *, 0xA3C) + 0x80, 0x40, func_ov113_020e2c08(1) + 3, 0);
    }
    if ((s32) M2C_FIELD(&data_ov113_020e4944, s32 *, 0xA40) < 0x100) {
        func_ov113_020e27ec(M2C_FIELD(&data_ov113_020e4944, s32 *, 0xA40) + 0x80, 0x60, func_ov113_020e2c08(2) + 5, 0);
    }
    if ((s32) M2C_FIELD(&data_ov113_020e4944, s32 *, 0xA44) < 0x100) {
        func_ov113_020e27ec(M2C_FIELD(&data_ov113_020e4944, s32 *, 0xA44) + 0x80, 0x80, func_ov113_020e2c08(3) + 7, 0);
    }
    if ((s32) M2C_FIELD(&data_ov113_020e4944, s32 *, 0xA48) < 0x100) {
        func_ov113_020e27ec(M2C_FIELD(&data_ov113_020e4944, s32 *, 0xA48) + 0x80, 0xA0, func_ov113_020e2c08(4) + 9, 0);
    }
    func_ov113_020e2750(0, 0x400);
}
