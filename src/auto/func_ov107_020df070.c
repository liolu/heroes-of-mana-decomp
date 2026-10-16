#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
M2C_UNK func_ov003_020665b8(void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov003_0206c2d4(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, void *, s32, M2C_UNK); /* extern */
s32 func_ov003_02090978(s32, void *);               /* extern */
M2C_UNK func_ov003_020909c8();                      /* extern */
s32 func_ov003_02091778(void *);                    /* extern */

void func_ov107_020df070(void *arg0) {
    s32 var_r5;
    void *temp_r1;
    void *temp_r1_2;

    func_ov003_020909c8();
    var_r5 = func_ov003_02091778(arg0);
    if (var_r5 == -1) {
        temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
        if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) < 0x50) {
            var_r5 = func_ov003_0206c2d4(0);
            if (var_r5 == -1) {
                return;
            }
            goto block_5;
        }
        func_ov003_020665b8(arg0, 0x1B, 0xB);
        return;
    }
block_5:
    if (func_ov003_02090978(var_r5, arg0) == 1) {
        func_ov003_020900e4(3, arg0, var_r5, 0);
        return;
    }
    temp_r1_2 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r1_2, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1_2, u16 *, 0x12)) < 0x50) {
        func_ov003_020900e4(6, arg0, var_r5, 0);
        return;
    }
    func_ov003_020665b8(arg0, 0x1B, 0xB);
}
