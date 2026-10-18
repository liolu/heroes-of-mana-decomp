#include "m2c.h"

M2C_UNK MI_CpuCopy8(void *, s32, s32);              /* extern */
extern void *data_ov123_020e4790;

void func_ov123_020cbfcc(void *arg0) {
    s32 var_r5;
    s32 temp_r3;
    u32 temp_r1;
    s32 temp_ip;

    if (M2C_FIELD(data_ov123_020e4790, s32 *, 0xE08) != 4) {
        return;
    }
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 8) == 0xCF)) {
        var_r5  = M2C_FIELD(arg0, s32 *, 0x10);
        temp_ip = M2C_FIELD(data_ov123_020e4790, s32 *, 0xE40);
        temp_r1 = M2C_FIELD(data_ov123_020e4790, u32 *, 0xE3C);
        temp_r3 = M2C_FIELD(data_ov123_020e4790, s32 *, 0xE38);
        if (temp_r1 < (u32) (temp_ip + var_r5)) {
            var_r5 = temp_r1 - temp_ip;
        }
        if (temp_r3 != 0) {
            MI_CpuCopy8(arg0 + 0x14, temp_r3 + temp_ip, var_r5);
        }
        M2C_FIELD(data_ov123_020e4790, s32 *, 0xE40) = (s32) (M2C_FIELD(data_ov123_020e4790, s32 *, 0xE40) + var_r5);
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            return;
        }
        M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 1;
        M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = 1;
        M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = (s32) M2C_FIELD(data_ov123_020e4790, s32 *, 0xE40);
        return;
    }
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE24) = 1;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE28) = 0;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE2C) = 0;
}
