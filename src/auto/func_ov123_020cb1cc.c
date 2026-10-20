#include "m2c.h"

s32 func_ov123_020c94ec(M2C_UNK, s32, M2C_UNK);     /* extern */
s32 func_ov123_020ca4ec(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_ov123_020cad74(s32, void *);           /* extern */
M2C_UNK func_ov123_020cad84(s32, void *);           /* extern */
s32 func_ov123_020cae34();                          /* extern */
extern s32 data_ov123_020e4754;

void func_ov123_020cb1cc(void) {
    s32 var_r9;
    s32 var_r10;
    void *temp_r1;
    void *temp_r1_2;

    data_ov123_020e4754 = func_ov123_020ca4ec(0x340, 4);
    var_r10 = 0;
    var_r9 = 0;
    do {
        M2C_FIELD((data_ov123_020e4754 + var_r9), s32 *, 0x19C) = func_ov123_020c94ec(0x20, data_ov123_020e4754 + var_r9, 0xC);
        M2C_FIELD((data_ov123_020e4754 + var_r9), s32 *, 0x198) = func_ov123_020cae34();
        M2C_FIELD((data_ov123_020e4754 + var_r9), s16 *, 0x188) = 0x300;
        M2C_FIELD((data_ov123_020e4754 + var_r9), s16 *, 0x194) = 0x400;
        temp_r1 = data_ov123_020e4754 + var_r9;
        func_ov123_020cad74(M2C_FIELD(temp_r1, s32 *, 0x198), temp_r1 + 0x180);
        temp_r1_2 = data_ov123_020e4754 + var_r9;
        func_ov123_020cad84(M2C_FIELD(temp_r1_2, s32 *, 0x198), temp_r1_2 + 0x18C);
        var_r10 += 1;
        var_r9 += 0x1A0;
    } while (var_r10 < 2);
}
