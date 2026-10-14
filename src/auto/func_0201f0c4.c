#include "m2c.h"

s32 func_020194a0(s32);                             /* extern */
M2C_UNK func_0201f530(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_020415e0;

s32 func_0201f0c4(void) {
    s32 var_r4;

    var_r4 = func_020194a0(M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), s32 *, 0x508));
    func_0201f530(1, var_r4);
    if (var_r4 == 2) {
        var_r4 = 0;
    }
    return var_r4;
}
