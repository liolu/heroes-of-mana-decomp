#include "m2c.h"

M2C_UNK CameraMoveAndWait(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
s32 GetUnitStatus();                          /* extern */

void func_ov032_020d4418(M2C_UNK arg0, M2C_UNK arg1) {
    M2C_UNK var_r5;

    var_r5 = arg0;
    if (GetUnitStatus() == 0) {
        var_r5 = 0xB;
    }
    CameraMoveAndWait(arg1, 1, var_r5, 0, -1, -1, -1);
}
