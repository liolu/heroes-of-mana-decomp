#include "m2c.h"

M2C_UNK func_ov003_02099b2c(M2C_UNK);               /* extern */
M2C_UNK func_ov003_0209a0ec(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_ov003_0209a25c(s32);                   /* extern */
M2C_UNK func_ov003_0209bca4(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_ov027_020d0b2c(s32 arg0) {
    func_ov003_0209bca4(arg0, 0xE, 0xA, 0);
    func_ov003_0209bca4(arg0, 0x1B, 1, 0);
    func_ov003_0209a0ec(0x30, 1, arg0, 0, -1, -1, -1);
    func_ov003_02099b2c(0x20);
    if (arg0 == 0x16) {
        func_ov003_0209a25c(0x8CB);
    } else {
        func_ov003_0209a25c(0x8CA);
    }
    func_ov003_02099b2c(0x20);
    func_ov003_0209bca4(arg0, 0x15, 1, 0);
    func_ov003_02099b2c(0x90);
}
