#include "m2c.h"

M2C_UNK MI_CpuCopy8(void *, s32, u32);              /* extern */
M2C_UNK OS_LockMutex(s32);                          /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
M2C_UNK func_ov123_020cc97c(M2C_UNK, M2C_UNK);      /* extern */
s32 func_ov123_020cce70(void *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_ov123_020cd9dc();                          /* extern */
s32 func_ov123_020cdb24();                          /* extern */
extern M2C_UNK data_ov123_020e47a4;
extern M2C_UNK func_ov123_020cdfd4;

s32 func_ov123_020cdb44(void *arg0, s32 arg1) {
    u32 temp_r4;

    if (M2C_FIELD(&data_ov123_020e47a4, void **, 8) == NULL) {
        return 0;
    }
    if (func_ov123_020cdb24() != 0) {
        return 0;
    }
    temp_r4 = M2C_FIELD(arg0, u32 *, 0);
    if (temp_r4 < 0xCU) {
        func_ov123_020cc97c(9, -2);
        return 0;
    }
    if (temp_r4 > 0x5B4U) {
        func_ov123_020cc97c(9, -2);
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0x44535359) {
        return 0;
    }
    OS_LockMutex(M2C_FIELD(&data_ov123_020e47a4, void **, 8) + 0xD2C);
    MI_CpuCopy8(arg0, M2C_FIELD(&data_ov123_020e47a4, void **, 8) + 0x620, temp_r4);
    M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 0xBD4) = 1;
    M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 0xBD8) = arg1;
    if (func_ov123_020cd9dc() != 0) {
        M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 0xBD4) = 2;
        if (func_ov123_020cce70(M2C_FIELD(&data_ov123_020e47a4, void **, 8) + 0x620, &func_ov123_020cdfd4, 0) == 0) {
            M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 0xBD4) = 1;
        }
    }
    func_0200e644(M2C_FIELD(&data_ov123_020e47a4, void **, 8) + 0xD2C);
    return 1;
}
