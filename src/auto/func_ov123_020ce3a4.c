#include "m2c.h"

M2C_UNK func_ov123_020ccac8(M2C_UNK, s32, s32);     /* extern */
extern void *data_ov123_020e4790;

void func_ov123_020ce3a4(void) {
    s32 temp_r1;
    s32 temp_r1_2;

    if (data_ov123_020e4790 == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(data_ov123_020e4790, s32 *, 0xE54);
    if (temp_r1 != 0) {
        func_ov123_020ccac8(0, temp_r1, M2C_FIELD(data_ov123_020e4790, s32 *, 0xE4C) * 4);
        M2C_FIELD(data_ov123_020e4790, s32 *, 0xE54) = 0;
    }
    temp_r1_2 = M2C_FIELD(data_ov123_020e4790, s32 *, 0xE50);
    if (temp_r1_2 == 0) {
        return;
    }
    func_ov123_020ccac8(0, temp_r1_2, M2C_FIELD(data_ov123_020e4790, s32 *, 0xE4C) * 4);
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE50) = 0;
}
