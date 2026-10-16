#include "m2c.h"

s32 func_ov123_02073d8c(s32, void *);               /* extern */
s32 func_ov123_02073e18(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_02073f18(s32, void *);               /* extern */
M2C_UNK func_ov123_020cc97c(M2C_UNK, M2C_UNK);      /* extern */
s32 func_ov123_020cd59c();                          /* extern */
extern void *data_ov123_020e47a0;

void func_ov123_020cd460(void) {
    s32 temp_r0;

    if (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) & 0x100) {
        return;
    }
    if (func_ov123_020cd59c() < 0) {
        M2C_FIELD(data_ov123_020e47a0, s32 *, 0) = (s32) (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) | 0x10000);
        func_ov123_020cc97c(6, -0x1E);
        return;
    }
    if (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) & 0x100) {
        return;
    }
    temp_r0 = func_ov123_02073e18(2, 1, 0);
    if (temp_r0 < 0) {
        M2C_FIELD(data_ov123_020e47a0, s32 *, 0) = (s32) (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) | 0x10000);
        func_ov123_020cc97c(6, -0x32);
        return;
    }
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0x2C) = temp_r0;
    if (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) & 0x100) {
        return;
    }
    if (func_ov123_02073f18(M2C_FIELD(data_ov123_020e47a0, s32 *, 0x2C), data_ov123_020e47a0 + 0x30) < 0) {
        M2C_FIELD(data_ov123_020e47a0, s32 *, 0) = (s32) (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) | 0x10000);
        func_ov123_020cc97c(6, -0x32);
        return;
    }
    if (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) & 0x100) {
        return;
    }
    if (func_ov123_02073d8c(M2C_FIELD(data_ov123_020e47a0, s32 *, 0x2C), data_ov123_020e47a0 + 0x24) >= 0) {
        return;
    }
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0) = (s32) (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) | 0x10000);
    func_ov123_020cc97c(6, -0x3C);
}
