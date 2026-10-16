#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
s32 func_ov003_02066888(void *);                    /* extern */
s32 func_ov003_0206d5a4(void *);                    /* extern */
s32 func_ov003_0206e07c(void *, M2C_UNK);           /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov003_02090978(M2C_UNK, void *);           /* extern */

s32 func_ov108_020d7904(void *arg0, M2C_UNK arg1) {
    M2C_UNK var_r1;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xE8);
    if ((func_0202d478(M2C_FIELD(temp_r3, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r3, u16 *, 0x12)) < 0x1E) &&
        (func_ov003_0206d5a4(arg0) == 5)) {
        return 0;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) < 0x32) {
        var_r1 = 1;
    } else {
        var_r1 = 5;
    }
    if (func_ov003_0206e07c(arg0, var_r1) == 0) {
        return 0;
    }
    if ((func_ov003_02066888(arg0) == 0x56) || (func_ov003_02066888(arg0) == 0x72)) {
        return 0;
    }
    if (func_ov003_02090978(arg1, arg0) == 1) {
        func_ov003_020900e4(3, arg0, arg1, 0);
        return 1;
    }
    if ((func_ov003_0206d5a4(arg0) == 5) || (func_ov003_0206d5a4(arg0) == 6) ||
        (temp_r1_2 = M2C_FIELD(arg0, void **, 0xE8),
         (func_0202d478(M2C_FIELD(temp_r1_2, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1_2, u16 *, 0x12)) < 0x32))) {
        return 0;
    }
    if (func_ov003_0206e07c(arg0, 2) != 0) {
        return 0;
    }
    func_ov003_020900e4(2, arg0, arg1, 0);
    return 1;
}
