#include "m2c.h"

s16 func_ov123_020ceef8(M2C_UNK);                   /* extern */
s32 func_ov123_020cef0c(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020cef34(M2C_UNK, M2C_UNK);      /* extern */

void func_ov123_020d0964(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s16 *, 8) = func_ov123_020ceef8(arg1);
    func_ov123_020cef34(arg1, 2);
    M2C_FIELD(arg0, s32 *, 0xC)  = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = func_ov123_020cef0c(arg1);
    M2C_FIELD(arg0, s16 *, 0x14) = func_ov123_020ceef8(arg1);
    func_ov123_020cef34(arg1, 2);
}
