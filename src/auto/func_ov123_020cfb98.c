#include "m2c.h"

M2C_UNK func_ov123_020ceed8(M2C_UNK, void *);       /* extern */
s16 func_ov123_020ceef8(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020cef34(M2C_UNK, M2C_UNK);      /* extern */

void func_ov123_020cfb98(void *arg0, M2C_UNK arg1) {
    s32 var_r4;
    void *var_r5;

    M2C_FIELD(arg0, s16 *, 4) = func_ov123_020ceef8(arg1);
    func_ov123_020cef34(arg1, 2);
    var_r5 = arg0 + 8;
    var_r4 = 0;
    do {
        func_ov123_020ceed8(arg1, var_r5);
        var_r4 += 1;
        var_r5 += 0x28;
    } while (var_r4 < 5);
}
