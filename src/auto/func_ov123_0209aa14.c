#include "m2c.h"

void *func_ov123_02088550();                        /* extern */
extern s32 data_ov123_020e1748;
extern M2C_UNK data_ov123_020e1750;

s32 func_ov123_0209aa14(s32 arg0) {
    s32 var_r5;

    if (data_ov123_020e1748 == 0) {
        return 0;
    }
    var_r5 = 0;
loop_3:
    if ((*(&data_ov123_020e1750 + var_r5) != 0) && (arg0 == M2C_FIELD(func_ov123_02088550(), u8 *, 1))) {
        return *(&data_ov123_020e1750 + var_r5);
    }
    var_r5 += 1;
    if (var_r5 >= 0x20) {
        return 0;
    }
    goto loop_3;
}
