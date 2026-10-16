#include "m2c.h"

M2C_UNK func_ov123_020cb908(s32, M2C_UNK, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32); /* extern */
s32 func_ov123_020cba78(s32, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_ov123_020cd778(s32);                   /* extern */
extern M2C_UNK data_ov123_020df084;
extern M2C_UNK data_ov123_020df094;
extern M2C_UNK func_ov123_020d1a8c;

s32 func_ov123_020d199c(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_ov123_020cb908(arg0 + 4, arg2, 0x2A75, &data_ov123_020df084, &data_ov123_020df094, 0, 0, 0, 0);
    func_ov123_020cd778(0x3F1);
    M2C_FIELD(arg0, s8 *, 0xEB0) = 0;
    if (func_ov123_020cba78(arg1 + 4, 0, &func_ov123_020d1a8c, arg0 + 0xEB0) != 0) {
        return 1;
    }
    return 3;
}
