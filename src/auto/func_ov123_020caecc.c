#include "m2c.h"

M2C_UNK func_ov123_020c9410(s32);                   /* extern */
extern s32 data_ov123_020e4750;

void func_ov123_020caecc(s32 arg0) {
    func_ov123_020c9410(M2C_FIELD((data_ov123_020e4750 + (arg0 * 4)), s32 *, 0x800));
}
