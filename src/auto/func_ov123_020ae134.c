#include "m2c.h"

M2C_UNK func_ov123_020cb618(s32, M2C_UNK *);        /* extern */
extern void *data_ov123_020e4568;
extern M2C_UNK func_ov123_020add20;

void func_ov123_020ae134(void) {
    M2C_FIELD(data_ov123_020e4568, s8 *, 0x19) = 1;
    func_ov123_020cb618(M2C_FIELD(data_ov123_020e4568, s32 *, 0xC), &func_ov123_020add20);
}
