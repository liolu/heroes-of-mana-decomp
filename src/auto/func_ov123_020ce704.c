#include "m2c.h"

M2C_UNK func_ov123_020cc97c(M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov123_020e4790;

s32 func_ov123_020ce704(s32 arg0) {
    if (data_ov123_020e4790 == NULL) {
        return 0;
    }
    if (M2C_FIELD(data_ov123_020e4790, s32 *, 0xE48) == 0) {
        func_ov123_020cc97c(9, -2);
        return 0;
    }
    if ((arg0 < 0) || ((s32) M2C_FIELD(data_ov123_020e4790, s32 *, 0xE4C) <= arg0)) {
        func_ov123_020cc97c(9, -2);
        return 0;
    }
    return 1;
}
