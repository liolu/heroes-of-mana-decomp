#include "m2c.h"

M2C_UNK func_ov123_020c8d2c(s32, M2C_UNK, u16, s32); /* extern */
extern void *data_ov123_020e46c8;

void func_ov123_020c1de8(s8 arg0) {
    func_ov123_020c8d2c(M2C_FIELD(data_ov123_020e46c8, s32 *, 0), -1, M2C_FIELD(data_ov123_020e46c8, u16 *, 0x10),
                        arg0 + M2C_FIELD(data_ov123_020e46c8, u16 *, 0x12));
    M2C_FIELD(data_ov123_020e46c8, s8 *, 0x1A) = arg0;
}
