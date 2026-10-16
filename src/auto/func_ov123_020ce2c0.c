#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MIi_CpuClear32(M2C_UNK, s32, s32);          /* extern */
s32 func_ov123_020ccaa4(M2C_UNK, s32, M2C_UNK);     /* extern */
s32 func_ov123_020cdac8(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020cdb08(M2C_UNK, M2C_UNK *);    /* extern */
extern void *data_ov123_020e4790;
extern s32 data_ov123_020e47bc;
extern M2C_UNK func_ov123_020ce85c;

void func_ov123_020ce2c0(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;

    MI_CpuFill8(data_ov123_020e4790 + 0xE44, 0, 0x1C);
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE44) = 0;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE48) = arg0;
    M2C_FIELD(data_ov123_020e4790, s32 *, 0xE4C) = arg1;
    if (arg1 > 0) {
        temp_r5 = arg1 * 4;
        temp_r0 = func_ov123_020ccaa4(0, temp_r5, 4);
        if (temp_r0 != 0) {
            MIi_CpuClear32(0, temp_r0, temp_r5);
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE50) = temp_r0;
        }
        temp_r0_2 = func_ov123_020ccaa4(0, temp_r5, 4);
        if (temp_r0_2 != 0) {
            MIi_CpuClear32(0, temp_r0_2, temp_r5);
            M2C_FIELD(data_ov123_020e4790, s32 *, 0xE54) = temp_r0_2;
        }
    }
    data_ov123_020e47bc = func_ov123_020cdac8(1);
    func_ov123_020cdb08(1, &func_ov123_020ce85c);
}
