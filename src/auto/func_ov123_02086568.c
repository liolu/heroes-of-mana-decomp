#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02024d0c(s32, s32, s32);               /* extern */
extern M2C_UNK data_ov123_020db258;
extern M2C_UNK data_ov123_020db34c;
extern M2C_UNK data_ov123_020db35c;

void func_ov123_02086568(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        func_02020d04(&data_ov123_020db34c, &data_ov123_020db258, 0, 0x2F);
    }
    if (arg1 == 0) {
        func_02020d04(&data_ov123_020db35c, &data_ov123_020db258, 0, 0x30);
    }
    func_02024d0c(arg0, arg1, arg2);
    M2C_FIELD((arg0 + arg2), s8 *, -1) = 0;
}
