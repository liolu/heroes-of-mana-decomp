/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02021318(s32, M2C_UNK *, s32);         /* extern */
s32 func_02024c28(M2C_UNK *);                       /* extern */
extern M2C_UNK data_ov123_020dbe0c;

void func_ov123_02090c28(s32 *arg0, M2C_UNK *arg1, s32 *arg2) {
    M2C_UNK *var_r7;
    s32 temp_r5;

    var_r7 = arg1;
    if (var_r7 == NULL) {
        var_r7 = &data_ov123_020dbe0c;
    }
    temp_r5 = func_02024c28(var_r7) + 1;
    func_02021318(*arg0, var_r7, temp_r5);
    *arg2 += temp_r5;
    *arg0 += temp_r5;
}
