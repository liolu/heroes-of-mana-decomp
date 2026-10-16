#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
M2C_UNK func_ov123_020cc4bc(M2C_UNK, s32);          /* extern */
M2C_UNK func_ov123_020cc51c();                      /* extern */
extern void *data_ov123_020e4790;
extern void *data_ov123_020e4794;

s32 func_ov123_020cbf1c(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    OS_LockMutex(data_ov123_020e4790 + 0xE0C);
    func_ov123_020cc4bc(arg3, arg4);
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE38) = arg1;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE3C) = arg2;
    M2C_FIELD(data_ov123_020e4794, s32 *, 0)     = 0x10;
    M2C_FIELD(data_ov123_020e4794, s32 *, 4)     = 0x44535359;
    M2C_FIELD(data_ov123_020e4794, s32 *, 8)     = 0xCC;
    M2C_FIELD(data_ov123_020e4794, s32 *, 0xC)   = arg0;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE08) = 4;
    func_ov123_020cc51c();
    func_0200e644(data_ov123_020e4790 + 0xE0C);
    return 1;
}
