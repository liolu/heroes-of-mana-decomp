#include "m2c.h"

M2C_UNK func_02024d0c(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_ov123_020dd4c0;

void func_ov123_020a4d14(void *arg0, s16 arg1, s32 arg2) {
    func_02024d0c(arg0 + 6, &data_ov123_020dd4c0, 2);
    M2C_FIELD(arg0, s16 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = arg2;
}
