/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0207ad6c(s32, M2C_UNK *, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
s32 func_ov123_0207b3f4();                          /* extern */
extern M2C_UNK data_ov123_020e0df8;
extern M2C_UNK data_ov123_020e0dfc;
extern M2C_UNK data_ov123_020e0e04;

void func_ov123_02079b48(void) {
    func_ov123_0207ad6c(M2C_FIELD(&data_ov123_020e0df8, s32 *, 0), &data_ov123_020e0e04,
                        M2C_FIELD(&data_ov123_020e0df8, s32 *, 0x4C), 0, &data_ov123_020e0dfc, 8);
    M2C_FIELD(&data_ov123_020e0df8, s32 *, 0x50) = func_ov123_0207b3f4();
}
