#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
M2C_UNK func_ov123_020cdb08(M2C_UNK, M2C_UNK *);    /* extern */
extern void *data_ov123_020e4790;
extern M2C_UNK func_ov123_020cc5bc;

s32 func_ov123_020cbd9c(s32 arg0, s32 arg1) {
    if (data_ov123_020e4790 == NULL) {
        return 0;
    }
    if (M2C_FIELD(data_ov123_020e4790, s32 *, 0xE08) != 0) {
        return 0;
    }
    OS_LockMutex(data_ov123_020e4790 + 0xE0C);
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE30) = arg0;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE34) = arg1;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 0;
    func_ov123_020cdb08(0, &func_ov123_020cc5bc);
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE08) = 1;
    func_0200e644(data_ov123_020e4790 + 0xE0C);
    return 1;
}
