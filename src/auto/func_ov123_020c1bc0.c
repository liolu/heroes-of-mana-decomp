#include "m2c.h"

M2C_UNK MIi_CpuCopy16(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_ov123_020cb5f8(M2C_UNK, M2C_UNK);      /* extern */
extern s32 data_ov123_020e46c0;

void func_ov123_020c1bc0(M2C_UNK arg0) {
    MIi_CpuCopy16(data_ov123_020e46c0, 0x05000000, 0x200);
    func_ov123_020cb5f8(1, arg0);
}
