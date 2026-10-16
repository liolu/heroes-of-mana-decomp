#include "m2c.h"

extern M2C_UNK data_ov123_020e45e0;

void func_ov123_020b2398(s32 *arg0, s32 *arg1) {
    if (arg0 != NULL) {
        *arg0 = M2C_FIELD(&data_ov123_020e45e0, s32 *, 8);
    }
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(&data_ov123_020e45e0, s32 *, 0xC);
    }
}
