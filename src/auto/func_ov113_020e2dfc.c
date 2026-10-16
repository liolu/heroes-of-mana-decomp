#include "m2c.h"

M2C_UNK func_ov113_020e2750(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov113_020e27ac();                      /* extern */
M2C_UNK func_ov113_020e27ec(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov113_020e2c08(M2C_UNK);                   /* extern */

void func_ov113_020e2dfc(void) {
    func_ov113_020e27ac();
    func_ov113_020e27ec(0x80, 0x40, func_ov113_020e2c08(5) + 0x2C, 0);
    func_ov113_020e27ec(0x80, 0x78, func_ov113_020e2c08(6) + 0x2A, 0);
    func_ov113_020e27ec(0xD4, 0xA8, func_ov113_020e2c08(7) + 0x28, 0);
    func_ov113_020e2750(0, 0x400);
}
