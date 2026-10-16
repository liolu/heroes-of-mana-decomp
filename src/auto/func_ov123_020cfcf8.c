#include "m2c.h"

M2C_UNK func_ov123_020ceed8(M2C_UNK, void *);       /* extern */
s16 func_ov123_020ceef8(M2C_UNK);                   /* extern */
s32 func_ov123_020cef0c(M2C_UNK);                   /* extern */

void func_ov123_020cfcf8(void *arg0, M2C_UNK arg1) {
    func_ov123_020ceed8(arg1, arg0 + 4);
    M2C_FIELD(arg0, s16 *, 0x10) = func_ov123_020ceef8(arg1);
    M2C_FIELD(arg0, s16 *, 0x12) = func_ov123_020ceef8(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_ov123_020cef0c(arg1);
    func_ov123_020ceed8(arg1, arg0 + 0x18);
    func_ov123_020ceed8(arg1, arg0 + 0xE8);
}
