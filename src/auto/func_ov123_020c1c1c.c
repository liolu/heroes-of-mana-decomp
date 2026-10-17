/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MIi_CpuCopy16(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_ov123_020cb5f8(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK data_ov123_020e46c0;

void func_ov123_020c1c1c(M2C_UNK arg0) {
    MIi_CpuCopy16(M2C_FIELD(&data_ov123_020e46c0, s32 *, 0), M2C_FIELD(&data_ov123_020e46c0, s32 *, 4), 0x20);
    func_ov123_020cb5f8(1, arg0);
}
