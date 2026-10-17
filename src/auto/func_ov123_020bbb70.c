#include "m2c.h"

M2C_UNK func_02028bf0(M2C_UNK *, M2C_UNK, M2C_UNK *, u8, s32, s32, s32); /* extern */
M2C_UNK func_ov123_020c99c0(s32, M2C_UNK, s32, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_ov123_020ddf98;
extern void *data_ov123_020e4674;

void func_ov123_020bbb70(void *arg0, s32 arg1) {
    u8 spC[36];

    func_02028bf0(spC, 0x10, &data_ov123_020ddf98, M2C_FIELD(arg0, u8 *, 0), (s32) M2C_FIELD(arg0, u8 *, 1),
                  (s32) M2C_FIELD(arg0, u8 *, 2), (s32) M2C_FIELD(arg0, u8 *, 3));
    func_ov123_020c99c0(M2C_FIELD(data_ov123_020e4674, s32 *, 0x14), 0x5F, (arg1 * 0x1D) + 8, 2, 7, spC, 1);
}
