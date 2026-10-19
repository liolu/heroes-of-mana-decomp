/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern u8 data_ov123_020e46c0;
extern M2C_UNK func_ov123_020c1c1c;

void func_ov123_020c1c4c(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(&data_ov123_020e46c0, s32 *, 0) = (s32) (arg0 + (arg1 << 5));
    M2C_FIELD(&data_ov123_020e46c0, s32 *, 4) = (s32) ((arg2 << 5) + 0x05000000);
    func_ov123_020cb6ac(1, &func_ov123_020c1c1c, 0, 0x78);
}
