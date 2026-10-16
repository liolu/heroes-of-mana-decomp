#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);      /* extern */
s32 func_ov123_02099cac();                          /* extern */
s32 func_ov123_02099cd0(M2C_UNK *, void *);         /* extern */
M2C_UNK func_ov123_020cc97c(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK data_ov123_020e47a4;
extern M2C_UNK data_ov123_020e47b4;

void func_ov123_020cdea4(void) {
    M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 0) = 1;
    if ((u32) (M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 4) - 1) <= 1U) {
        return;
    }
    MI_CpuFill8(M2C_FIELD(&data_ov123_020e47a4, void **, 8) + 8, 0, 0x174);
    if (func_ov123_02099cd0(&data_ov123_020e47b4, M2C_FIELD(&data_ov123_020e47a4, void **, 8) + 8) == 0) {
        func_ov123_020cc97c(6, -0xA);
        return;
    }
    M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 4) = func_ov123_02099cac();
}
