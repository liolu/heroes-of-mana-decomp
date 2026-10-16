#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
M2C_UNK func_ov123_020cc4bc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020cc51c();                      /* extern */
extern void *data_ov123_020e4790;
extern void *data_ov123_020e4794;

s32 func_ov123_020cc334(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    OS_LockMutex(data_ov123_020e4790 + 0xE0C);
    func_ov123_020cc4bc(arg1, arg2);
    M2C_FIELD(data_ov123_020e4794, s32 *, 0)     = 0x10;
    M2C_FIELD(data_ov123_020e4794, s32 *, 4)     = 0x44535359;
    M2C_FIELD(data_ov123_020e4794, s32 *, 8)     = 0xCB;
    M2C_FIELD(data_ov123_020e4794, s32 *, 0xC)   = arg0;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE08) = 6;
    func_ov123_020cc51c();
    func_0200e644(data_ov123_020e4790 + 0xE0C);
    return 1;
}
