#include "m2c.h"

M2C_UNK DC_FlushRange(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200baa4(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_ov123_020cb5f8(M2C_UNK, M2C_UNK);      /* extern */
extern s32 data_ov123_020e45b4;

void func_ov123_020ae858(M2C_UNK arg0) {
    DC_FlushRange(data_ov123_020e45b4, 0xC0);
    func_0200baa4(data_ov123_020e45b4, 0, 0xC0);
    func_ov123_020cb5f8(1, arg0);
}
