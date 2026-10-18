#include "m2c.h"

s32 func_ov123_020c94ec(M2C_UNK, s32, M2C_UNK);     /* extern */
s32 func_ov123_020ca4ec(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_ov123_020cad74(s32, void *);           /* extern */
M2C_UNK func_ov123_020cad84(s32, void *);           /* extern */
s32 func_ov123_020cae34();                          /* extern */
s32 func_ov123_020cae68(s32, M2C_UNK);              /* extern */
extern s32 data_ov123_020e4714;

void func_ov123_020c91dc(void) {
    s32 var_r8;
    s32 var_r9;
    void *temp_r1;
    void *temp_r1_2;

    data_ov123_020e4714 = func_ov123_020ca4ec(0x450, 4);
    var_r9              = 0;
    var_r8              = 0;
    do {
        M2C_FIELD((data_ov123_020e4714 + var_r8), s32 *, 0x224) =
            func_ov123_020c94ec(0x20, data_ov123_020e4714 + var_r8, 0x10);
        M2C_FIELD((data_ov123_020e4714 + var_r8), s32 *, 0x220) = func_ov123_020cae34();
        M2C_FIELD((data_ov123_020e4714 + var_r8), s32 *, 0x208) = func_ov123_020cae68(var_r9, 0x40);
        M2C_FIELD((data_ov123_020e4714 + var_r8), s32 *, 0x218) = (s32) (func_ov123_020cae68(var_r9, 0x7F) + 8);
        temp_r1                                                 = data_ov123_020e4714 + var_r8;
        func_ov123_020cad74(M2C_FIELD(temp_r1, s32 *, 0x220), temp_r1 + 0x200);
        temp_r1_2 = data_ov123_020e4714 + var_r8;
        func_ov123_020cad84(M2C_FIELD(temp_r1_2, s32 *, 0x220), temp_r1_2 + 0x210);
        var_r8 += 0x228;
        var_r9 += 1;
    } while (var_r9 < 2);
}
