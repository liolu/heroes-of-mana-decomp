#include "m2c.h"

M2C_UNK func_ov123_02099564();                      /* extern */
extern M2C_UNK data_ov123_020e4798;

void func_ov123_020cc920(void) {
    if (M2C_FIELD(&data_ov123_020e4798, s32 *, 0) != 9) {
        M2C_FIELD(&data_ov123_020e4798, s32 *, 0) = 0;
        M2C_FIELD(&data_ov123_020e4798, s32 *, 4) = 0;
    }
    func_ov123_02099564();
}
