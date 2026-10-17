/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020ae394();                          /* extern */
s32 func_ov123_020b29dc(s32, M2C_UNK);              /* extern */
M2C_UNK func_ov123_020c98a8(s32);                   /* extern */
M2C_UNK func_ov123_020c9988(s32, u16, u16, u16, s32, s32, s32, s32); /* extern */
s32 func_ov123_020c9c88(M2C_UNK, M2C_UNK);          /* extern */
extern M2C_UNK data_ov123_020d79b0;
extern s32 data_ov123_020e45fc;

void func_ov123_020ae47c(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_ov123_020c9c88(0, 0);
    temp_r4 = func_ov123_020b29dc(data_ov123_020e45fc, arg0);
    func_ov123_020c9988(temp_r5, M2C_FIELD(&data_ov123_020d79b0, u16 *, 0), M2C_FIELD(&data_ov123_020d79b0, u16 *, 2),
                        M2C_FIELD(&data_ov123_020d79b0, u16 *, 4), (s32) M2C_FIELD(&data_ov123_020d79b0, u16 *, 6), 2,
                        func_ov123_020ae394(), temp_r4);
    func_ov123_020c98a8(temp_r5);
}
