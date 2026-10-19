#include "m2c.h"

M2C_UNK func_ov123_020c8840(s32);                   /* extern */
extern M2C_UNK data_ov123_020e4718;

void func_ov123_020c93b8(s32 arg0) {
    func_ov123_020c8840(*(&data_ov123_020e4718 + arg0));
    *(&data_ov123_020e4718 + arg0) = 0;
}
