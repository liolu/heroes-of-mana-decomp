#include "m2c.h"

M2C_UNK func_ov003_0209d7d8(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov003_0209d958(s32, M2C_UNK);          /* extern */
s32 func_ov003_0209fb2c();                          /* extern */
M2C_UNK func_ov003_0209fb70(M2C_UNK, M2C_UNK);      /* extern */

void func_ov032_020d4190(void) {
    s32 var_r7;

    var_r7 = 0;
    do {
        func_ov003_0209d7d8(var_r7, -1);
        func_ov003_0209d7d8(var_r7, -2);
        func_ov003_0209d7d8(var_r7, -3);
        func_ov003_0209d958(var_r7, -1);
        var_r7 += 1;
    } while (var_r7 < 0xB);
    if (func_ov003_0209fb2c() != 1) {
        return;
    }
    func_ov003_0209fb70(0x25, 1);
}
