#include "m2c.h"

void func_ov123_020c9468(s32, s32);                 /* extern */
extern s32 data_ov123_020e478c;

void func_ov123_020cb5f8(s32 arg0, s32 arg1) {
    func_ov123_020c9468(M2C_FIELD((data_ov123_020e478c + (arg0 << 6)), s32 *, 4), arg1);
}
