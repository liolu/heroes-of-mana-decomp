#include "m2c.h"

s32 func_0200fa98();

M2C_UNK func_0200faac(s32);

s32 func_020118cc(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0203a630;

void TP_RequestSamplingAsync(void) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = func_0200fa98();
    if (func_020118cc(6, 0x03000000, 0) >= 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        func_0200faac(temp_r4);
        M2C_FIELD(&data_0203a630, u16 *, 0x38) = (u16) (M2C_FIELD(&data_0203a630, u16 *, 0x38) | 1);
        if (M2C_FIELD(&data_0203a630, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4) == NULL) {
            return;
        }
        M2C_FIELD(&data_0203a630, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4)(0, 4, 0);
        return;
    }
    M2C_FIELD(&data_0203a630, u16 *, 0x3A) = (u16) (M2C_FIELD(&data_0203a630, u16 *, 0x3A) | 1);
    M2C_FIELD(&data_0203a630, u16 *, 0x38) = (u16) (M2C_FIELD(&data_0203a630, u16 *, 0x38) & ~1);
    func_0200faac(temp_r4);
}
