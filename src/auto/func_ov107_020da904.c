#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov003_02090978(M2C_UNK, void *);           /* extern */
M2C_UNK func_ov003_020909ec();                      /* extern */

void func_ov107_020da904(void *arg0, M2C_UNK arg1) {
    void *temp_r1;

    func_ov003_020909ec();
    if (func_ov003_02090978(arg1, arg0) == 1) {
        func_ov003_020900e4(3, arg0, arg1, 0);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) < 0x50) {
        return;
    }
    func_ov003_020900e4(6, arg0, arg1, 0);
}
