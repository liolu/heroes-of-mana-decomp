/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c8f8c(s32);                   /* extern */
M2C_UNK func_ov123_020cb618(s32, M2C_UNK *);        /* extern */
extern void *data_ov123_020e45c0;
extern M2C_UNK func_ov123_020b0cbc;

void func_ov123_020b1d34(void) {
    func_ov123_020c8f8c(M2C_FIELD(data_ov123_020e45c0, s32 *, 0x58));
    func_ov123_020cb618(M2C_FIELD(data_ov123_020e45c0, s32 *, 0x5C), &func_ov123_020b0cbc);
}
