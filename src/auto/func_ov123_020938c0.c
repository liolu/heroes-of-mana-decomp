#include "m2c.h"

M2C_UNK MI_CpuCopy8(M2C_UNK *, void *, M2C_UNK);    /* extern */
s32 func_ov123_020912ec();                          /* extern */
s32 func_ov123_02093818(u8);                        /* extern */
s32 func_ov123_0209386c(void *);                    /* extern */
extern M2C_UNK data_ov123_020d508c;

void func_ov123_020938c0(void *arg0, void *arg1, void *arg2) {
    void *temp_r5;

    MI_CpuCopy8(&data_ov123_020d508c, arg2, 0x58);
    M2C_FIELD(arg2, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg2, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 4);
    if ((u32) M2C_FIELD(arg1, u8 *, 0xD0D) >= 6U) {
        return;
    }
    temp_r5 = arg1 + (func_ov123_020912ec() << 8);
    if (M2C_FIELD(temp_r5, u8 *, 0xC0) != 0) {
        M2C_FIELD(arg2, s32 *, 0xC)  = 0;
        M2C_FIELD(arg2, s32 *, 0x10) = func_ov123_0209386c(temp_r5 + 0xC0);
        M2C_FIELD(arg2, s32 *, 0x14) = func_ov123_02093818(M2C_FIELD(temp_r5, u8 *, 0xD0));
        M2C_FIELD(arg2, s32 *, 0x18) = func_ov123_0209386c(temp_r5 + 0xC4);
        M2C_FIELD(arg2, s32 *, 0x1C) = func_ov123_0209386c(temp_r5 + 0xC8);
        M2C_FIELD(arg2, s32 *, 0x20) = func_ov123_0209386c(temp_r5 + 0xCC);
        return;
    }
    M2C_FIELD(arg2, s32 *, 0xC)  = 1;
    M2C_FIELD(arg2, s32 *, 0x10) = 0;
    M2C_FIELD(arg2, s32 *, 0x14) = 0;
    M2C_FIELD(arg2, s32 *, 0x18) = 0;
    M2C_FIELD(arg2, s32 *, 0x1C) = 0;
    M2C_FIELD(arg2, s32 *, 0x20) = 0;
}
