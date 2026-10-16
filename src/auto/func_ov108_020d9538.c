#include "m2c.h"

s32 func_ov003_0206d624(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov003_02090978(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_ov003_020909ec();                      /* extern */

void func_ov108_020d9538(M2C_UNK arg0, M2C_UNK arg1) {
    func_ov003_020909ec();
    if (func_ov003_02090978(arg1, arg0) == 1) {
        func_ov003_020900e4(3, arg0, arg1, 0);
        return;
    }
    if (func_ov003_0206d624(arg1) != 5) {
        return;
    }
    func_ov003_020900e4(2, arg0, arg1, 0);
}
