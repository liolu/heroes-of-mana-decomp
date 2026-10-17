#include "m2c.h"

M2C_UNK BGM_Change(M2C_UNK);               /* extern */
M2C_UNK BGM_Fade(M2C_UNK);               /* extern */
s32 func_ov122_02055af0();                          /* extern */
M2C_UNK func_ov122_0205ce60(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov122_0205db1c(M2C_UNK);               /* extern */
s32 func_ov123_020d3344();                          /* extern */
s32 func_ov123_020d3bac();                          /* extern */
extern M2C_UNK data_ov122_02065604;

s32 func_ov122_0205df98(void) {
    s32 var_r5;

    if (func_ov123_020d3bac() == 0) {
        return 1;
    }
    M2C_FIELD(&data_ov122_02065604, s32 *, 0xE30) = 8;
    M2C_FIELD(&data_ov122_02065604, s32 *, 0xE34) = 0x192;
    M2C_FIELD(&data_ov122_02065604, s32 *, 0xE38) = 0x37;
    func_ov122_0205ce60(0x40000000, 0x80000000);
    BGM_Fade(1);
    BGM_Change(6);
    BGM_Fade(0);
    var_r5 = 1;
loop_3:
    if (func_ov123_020d3344() == 0) {
        func_ov122_0205db1c(3);
        return 0;
    }
    if (func_ov122_02055af0() == 1) {
        var_r5 = 0;
    }
    if (var_r5 == 0) {
        return 1;
    }
    goto loop_3;
}
