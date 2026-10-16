#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a03f4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a06f0(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov003_020a0828(M2C_UNK);               /* extern */

void func_ov011_020d05a8(void) {
    s32 var_r5;

    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    var_r5 = 0x1C;
    do {
        func_ov003_020a06f0(var_r5, 0);
        var_r5 += 1;
    } while (var_r5 < 0x21);
    func_ov003_020a03f4(0x13, 0);
    func_ov003_020a03f4(9, 0);
    func_ov003_020a03f4(0xB, 0);
    func_ov003_020a03f4(0x17, 0);
    func_ov003_020a03f4(0xBB, 0);
    func_ov003_020a03f4(0x7E, 0);
    func_ov003_020a03f4(0xC9, 0);
    func_ov003_020a03f4(0xC1, 0);
    func_ov003_020a03f4(0xBC, 0);
    func_ov003_020a03f4(0x4C, 0);
    func_ov003_020a03f4(0x3E, 0);
    func_ov003_020a03f4(0x52, 0);
    func_ov003_020a0828(0x16);
}
