#include "m2c.h"

M2C_UNK func_ov123_0209ac98(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern void *data_ov123_020e4790;
extern M2C_UNK func_ov123_020cb9fc;

void func_ov123_020cba78(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE00) = arg2;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE04) = arg3;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xDFC) = 1;
    func_ov123_0209ac98(arg0, arg1, &func_ov123_020cb9fc, 0);
}
