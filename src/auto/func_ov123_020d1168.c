#include "m2c.h"

M2C_UNK func_ov123_020cea10(M2C_UNK, void *);       /* extern */
M2C_UNK func_ov123_020ceb44(M2C_UNK, s32);          /* extern */
M2C_UNK func_ov123_020ced60(M2C_UNK, void *, M2C_UNK); /* extern */

void func_ov123_020d1168(void *arg0, M2C_UNK arg1) {
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r4_3;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;

    func_ov123_020ced60(arg1, arg0 + 8, 0x18);
    func_ov123_020ceb44(arg1, M2C_FIELD(arg0, s32 *, 0x20));
    func_ov123_020ceb44(arg1, M2C_FIELD(arg0, s32 *, 0x24));
    func_ov123_020ceb44(arg1, M2C_FIELD(arg0, s32 *, 0x28));
    func_ov123_020ced60(arg1, arg0 + 0x2C, 8);
    func_ov123_020ced60(arg1, arg0 + 0x34, 8);
    func_ov123_020ceb44(arg1, M2C_FIELD(arg0, s32 *, 0x3C));
    var_r4 = 0;
    var_r5 = arg0 + 0x40;
    do {
        func_ov123_020cea10(arg1, var_r5);
        var_r4 += 1;
        var_r5 += 0x4C;
    } while (var_r4 < 5);
    var_r5_2 = arg0 + 0x1BC;
    var_r4_2 = 0;
    do {
        func_ov123_020cea10(arg1, var_r5_2);
        var_r4_2 += 1;
        var_r5_2 += 0x60;
    } while (var_r4_2 < 5);
    var_r5_3 = arg0 + 0x39C;
    var_r4_3 = 0;
    do {
        func_ov123_020cea10(arg1, var_r5_3);
        var_r4_3 += 1;
        var_r5_3 += 0x60;
    } while (var_r4_3 < 5);
}
