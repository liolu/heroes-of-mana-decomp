#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a03f4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a06f0(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov003_020a0828(M2C_UNK);               /* extern */

void func_ov007_020d05dc(void) {
    s32 var_r5;

    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    var_r5 = 0xD;
    do {
        func_ov003_020a06f0(var_r5, 0);
        var_r5 += 1;
    } while (var_r5 < 0x13);
    func_ov003_020a03f4(7, 0);
    func_ov003_020a03f4(0x3D, 0);
    func_ov003_020a03f4(0x41, 0);
    func_ov003_020a03f4(0x2A, 0);
    func_ov003_020a03f4(0x90, 0);
    func_ov003_020a0828(9);
}
