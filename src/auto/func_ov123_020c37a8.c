#include "m2c.h"

M2C_UNK DC_FlushRange(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200bb04(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_ov123_020c8840(s32);                   /* extern */
M2C_UNK func_ov123_020cb5f8(M2C_UNK, M2C_UNK);      /* extern */
extern s32 data_ov123_020e46d8;

void func_ov123_020c37a8(M2C_UNK arg0) {
    DC_FlushRange(data_ov123_020e46d8, 0x600);
    func_0200bb04(data_ov123_020e46d8, 0, 0x600);
    func_ov123_020c8840(data_ov123_020e46d8);
    func_ov123_020cb5f8(1, arg0);
}
