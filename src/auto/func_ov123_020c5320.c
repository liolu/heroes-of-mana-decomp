/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020cb5f8(M2C_UNK, s32);          /* extern */
s32 func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern void *data_ov123_020e46e4;
extern M2C_UNK func_ov123_020c4c94;

void func_ov123_020c5320(void) {
    func_ov123_020cb5f8(0, M2C_FIELD(data_ov123_020e46e4, s32 *, 0x14));
    M2C_FIELD(data_ov123_020e46e4, s32 *, 0x14) = func_ov123_020cb6ac(1, &func_ov123_020c4c94, 0, 0x78);
}
