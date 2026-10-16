#include "m2c.h"

M2C_UNK func_ov003_02099b2c(M2C_UNK);               /* extern */
M2C_UNK func_ov003_0209a0ec(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_ov003_0209bca4(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov003_020a1bd4(M2C_UNK, s32);          /* extern */

void func_ov007_020d07e8(s32 arg0) {
    M2C_UNK var_r3;

    if (arg0 == 3) {
        var_r3 = 0x16;
    } else if (arg0 == 4) {
        var_r3 = 0x13;
    } else {
        var_r3 = 0x15;
    }
    func_ov003_0209bca4(arg0, 7, 5, var_r3);
    func_ov003_0209bca4(arg0, 1, 0x190, 0);
    func_ov003_0209bca4(arg0, 0xB, 9, 0);
    func_ov003_0209a0ec(0x3C, 1, arg0, 0, -1, -1, -1);
    func_ov003_020a1bd4(0, arg0);
    func_ov003_02099b2c(4);
    func_ov003_020a1bd4(1, arg0);
}
