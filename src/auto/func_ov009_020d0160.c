#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a03f4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a0498(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a06f0(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov003_020a078c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a0828(M2C_UNK);               /* extern */

void func_ov009_020d0160(void) {
    s32 var_r5;

    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    func_ov003_020a0498(1, 0xD0);
    func_ov003_020a0498(2, 0xD1);
    func_ov003_020a0498(3, 0xD2);
    func_ov003_020a0498(4, 0xD3);
    func_ov003_020a0498(5, 0xD4);
    func_ov003_020a078c(0xC, 0x3B);
    func_ov003_020a078c(0x16, 0x17);
    var_r5 = 0x18;
    do {
        func_ov003_020a06f0(var_r5, 0);
        var_r5 += 1;
    } while (var_r5 < 0x1A);
    func_ov003_020a03f4(0x2B, 0);
    func_ov003_020a03f4(0x51, 0);
    func_ov003_020a03f4(0x89, 0);
    func_ov003_020a0828(0x13);
}
