#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
s32 func_ov123_020cc4fc();                          /* extern */
M2C_UNK func_ov123_020cc51c();                      /* extern */
M2C_UNK func_ov123_020cc97c(M2C_UNK, M2C_UNK);      /* extern */
s32 func_ov123_020ce504(s32);                       /* extern */
s32 func_ov123_020ce604();                          /* extern */
extern void *data_ov123_020e4790;

void func_ov123_020cbb84(s32 *arg0) {
    s32 temp_r0;

    if (*arg0 == 0) {
        if (func_ov123_020ce604() == 0) {
            return;
        }
        OS_LockMutex(data_ov123_020e4790 + 0xE0C);
        temp_r0 = func_ov123_020ce504(M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C));
        *arg0   = temp_r0;
        if (temp_r0 != 0) {
            func_ov123_020cc51c();
        } else {
            func_ov123_020cc97c(6, -0x14);
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 1;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = 0;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = 0;
        }
        func_0200e644(data_ov123_020e4790 + 0xE0C);
        return;
    }
    if (func_ov123_020cc4fc() == 0) {
        return;
    }
    func_ov123_020cc51c();
}
