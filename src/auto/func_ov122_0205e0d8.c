#include "m2c.h"

s32 func_ov122_02055af0();                          /* extern */
M2C_UNK func_ov122_0205ce60(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov122_0205db1c(M2C_UNK);               /* extern */
s32 func_ov122_0205db94();                          /* extern */
s32 func_ov123_020d3344();                          /* extern */
s32 func_ov123_020d498c();                          /* extern */
s32 func_ov123_020d49b4();                          /* extern */
extern M2C_UNK data_ov122_020647c0;
extern M2C_UNK data_ov122_02065604;

s32 func_ov122_0205e0d8(void) {
    s32 temp_r0;
    s32 var_r8;

    if (func_ov123_020d498c() == 0) {
        return 1;
    }
    temp_r0                                       = func_ov123_020d49b4();
    M2C_FIELD(&data_ov122_020647c0, s32 *, 0xC4)  = temp_r0;
    M2C_FIELD(&data_ov122_02065604, s32 *, 0xE30) = 6;
    M2C_FIELD(&data_ov122_02065604, s32 *, 0xE38) = 0x38;
    M2C_FIELD(&data_ov122_02065604, s32 *, 0xDF0) = temp_r0;
loop_3:
    func_ov122_0205ce60(0x40000000, 0x80000000);
    var_r8 = 1;
loop_4:
    if (func_ov123_020d3344() == 0) {
        func_ov122_0205db1c(3);
        return 0;
    }
    if (func_ov122_02055af0() == 1) {
        var_r8 = 0;
    }
    if (var_r8 == 0) {
        if (func_ov122_0205db94() != 0) {
            return 0;
        }
        goto loop_3;
    }
    goto loop_4;
}
