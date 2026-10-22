#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
M2C_UNK func_ov123_020cbb84(s32);                   /* extern */
M2C_UNK func_ov123_020cc4bc(M2C_UNK, M2C_UNK);      /* extern */
s32 func_ov123_020cc4fc();                          /* extern */
M2C_UNK func_ov123_020cc51c();                      /* extern */
extern void *data_ov123_020e4790;
extern s32 data_ov123_020e4794;

void func_ov123_020cbc3c(void) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    M2C_UNK (*temp_r7)(s32, s32, s32);
    u32 temp_r0;

    if (data_ov123_020e4790 == NULL) {
        return;
    }
    temp_r0 = M2C_FIELD(data_ov123_020e4790, u32 *, 0xE08);
    switch (temp_r0) {
        default:
            break;
        case 1:
        case 3:
            OS_LockMutex(data_ov123_020e4790 + 0xE0C);
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 1;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = 1;
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = 0;
            func_0200e644(data_ov123_020e4790 + 0xE0C);
            break;
        case 8:
            func_ov123_020cbb84(data_ov123_020e4794 + 0x10);
            break;
        case 9:
            func_ov123_020cbb84(data_ov123_020e4794 + 0x10);
            break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 10:
        case 11:
            if (func_ov123_020cc4fc() != 0) {
                func_ov123_020cc51c();
            }
            break;
    }
    if (M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) == 0) {
        return;
    }
    OS_LockMutex(data_ov123_020e4790 + 0xE0C);
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 0;
    temp_r4                                      = M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28);
    temp_r5                                      = M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C);
    temp_r6                                      = M2C_FIELD(data_ov123_020e4790, s32 *, 0xE34);
    temp_r7                                      = M2C_FIELD(data_ov123_020e4790, M2C_UNK(**)(s32, s32, s32), 0xE30);
    func_ov123_020cc4bc(0, 0);
    M2C_FIELD(data_ov123_020e4790, u32 *, 0xE08) = 2U;
    func_0200e644(data_ov123_020e4790 + 0xE0C);
    if (temp_r7 == NULL) {
        return;
    }
    temp_r7(temp_r4, temp_r5, temp_r6);
}
