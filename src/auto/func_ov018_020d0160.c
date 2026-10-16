#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a03f4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_020a06f0(s32, M2C_UNK);          /* extern */

void func_ov018_020d0160(void) {
    s32 var_r5;

    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    var_r5 = 0x29;
    do {
        func_ov003_020a06f0(var_r5, 0);
        var_r5 += 1;
    } while (var_r5 < 0x2D);
    func_ov003_020a03f4(0x7A, 0);
    func_ov003_020a03f4(0x43, 0);
    func_ov003_020a03f4(0x49, 0);
    func_ov003_020a03f4(0x53, 0);
}
