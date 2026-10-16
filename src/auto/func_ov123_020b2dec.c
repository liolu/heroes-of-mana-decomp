#include "m2c.h"

s32 func_ov123_020c85c8();                          /* extern */
M2C_UNK func_ov123_020cb5f8(M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov123_020e45f4;

void func_ov123_020b2dec(M2C_UNK arg0) {
    if (func_ov123_020c85c8() == 0) {
        return;
    }
    M2C_FIELD(data_ov123_020e45f4, s8 *, 0x1E2A1) = 1;
    func_ov123_020cb5f8(0, arg0);
}
