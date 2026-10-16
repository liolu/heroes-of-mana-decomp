#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
s32 func_ov003_0206c2d4(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, void *, s32, M2C_UNK); /* extern */
s32 func_ov003_02090978(s32, void *);               /* extern */

s32 func_ov107_020da978(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xE8);
    var_r4  = arg1;
    if (func_0202d478(M2C_FIELD(temp_r3, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r3, u16 *, 0x12)) < 0x50) {
        temp_r0 = func_ov003_0206c2d4(0xE);
        var_r4  = temp_r0;
        if (var_r4 == -1) {
            return 0;
        }
        if (func_ov003_02090978(temp_r0, arg0) == 0) {
            return 0;
        }
        goto block_5;
    }
block_5:
    if (func_ov003_02090978(var_r4, arg0) != 1) {
        return 0;
    }
    func_ov003_020900e4(3, arg0, var_r4, 0);
    return 1;
}
