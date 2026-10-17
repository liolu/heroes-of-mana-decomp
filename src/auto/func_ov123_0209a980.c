/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MIi_CpuClear32(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_ov123_020e1750;
extern M2C_UNK data_ov123_020e17d0;

void func_ov123_0209a980(void) {
    MIi_CpuClear32(0, &data_ov123_020e1750, 0x80);
    MIi_CpuClear32(0, &data_ov123_020e17d0, 0x100);
}
