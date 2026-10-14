#include "m2c.h"

M2C_UNK func_020130e4(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02018164();                                /* extern */

void func_020136e0(M2C_UNK arg0) {
    M2C_UNK var_r1;

    if (func_02018164() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    func_020130e4(arg0, var_r1);
}
