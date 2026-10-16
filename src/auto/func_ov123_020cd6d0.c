#include "m2c.h"

M2C_UNK func_ov123_020cc97c(M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov123_020e47a0;

void func_ov123_020cd6d0(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK (*temp_ip)(M2C_UNK, M2C_UNK, M2C_UNK, s32);

    M2C_FIELD(data_ov123_020e47a0, s32 *, 0) = (s32) (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) & ~0x10);
    if (arg2 != 0) {
        func_ov123_020cc97c(6, -0x32);
    }
    temp_ip = M2C_FIELD(data_ov123_020e47a0, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK, s32), 0x19F0);
    if (temp_ip == NULL) {
        return;
    }
    temp_ip(0, arg0, arg1, M2C_FIELD(data_ov123_020e47a0, s32 *, 0x19F4));
}
