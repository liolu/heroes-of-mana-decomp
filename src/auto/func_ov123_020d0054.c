#include "m2c.h"

M2C_UNK func_ov123_020ceed8(M2C_UNK, s32);          /* extern */
s16 func_ov123_020ceef8(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020cef34(M2C_UNK, M2C_UNK);      /* extern */

void func_ov123_020d0054(void *arg0, M2C_UNK arg1) {
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r7;
    s32 var_r7_2;

    var_r7 = arg0 + 4;
    var_r6 = 0;
    do {
        func_ov123_020ceed8(arg1, var_r7);
        var_r6 += 1;
        var_r7 += 0x1B8;
    } while (var_r6 < 5);
    var_r7_2 = arg0 + 0x89C;
    var_r6_2 = 0;
    do {
        func_ov123_020ceed8(arg1, var_r7_2);
        var_r6_2 += 1;
        var_r7_2 += 0x1B8;
    } while (var_r6_2 < 5);
    func_ov123_020ceed8(arg1, arg0 + 0x1134);
    M2C_FIELD(arg0, s16 *, 0x4D38) = func_ov123_020ceef8(arg1);
    func_ov123_020cef34(arg1, 2);
}
