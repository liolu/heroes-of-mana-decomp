#include "m2c.h"

s32 STD_GetStringLength();                          /* extern */
M2C_UNK func_02020a50(void *, s32, s32);            /* extern */
s32 func_ov123_020cc948();                          /* extern */
M2C_UNK func_ov123_020ccc44(M2C_UNK *, M2C_UNK);    /* extern */
M2C_UNK func_ov123_020cce70(void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_020cdfc0();                          /* extern */
extern void *data_ov123_020e4790;
extern M2C_UNK data_ov123_020e47a4;
extern M2C_UNK func_ov123_020ce148;

void func_ov123_020cdc80(void) {
    s32 *temp_r4;
    s32 temp_r0;
    void *temp_r5;

    if (func_ov123_020cc948() != 0) {
        return;
    }
    temp_r4                      = M2C_FIELD(&data_ov123_020e47a4, s32 **, 8);
    M2C_FIELD(temp_r4, s32 *, 0) = 3;
    temp_r5                      = ((void *) ((u8 *) temp_r4 + 0xBDC));
    func_ov123_020cdfc0();
    temp_r0                          = STD_GetStringLength();
    M2C_FIELD(temp_r5, s32 *, 8)     = 0xD3;
    M2C_FIELD(temp_r5, s32 *, 4)     = 0x44535359;
    M2C_FIELD(temp_r4, s32 *, 0xBDC) = (s32) (temp_r0 + 0x19);
    M2C_FIELD(temp_r5, s32 *, 0x10)  = (s32) M2C_FIELD(&data_ov123_020e47a4, s32 *, 4);
    M2C_FIELD(temp_r5, s32 *, 0xC)   = 0;
    M2C_FIELD(temp_r5, s32 *, 0x14)  = (s32) M2C_FIELD(data_ov123_020e4790, s32 *, 0xDF0);
    func_02020a50(temp_r5 + 0x18, func_ov123_020cdfc0(), 0x12D);
    func_ov123_020ccc44(&func_ov123_020ce148, 0);
    func_ov123_020cce70(temp_r5, 0, 0);
}
