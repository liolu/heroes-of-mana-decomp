#include "m2c.h"

M2C_UNK MI_CpuFill8(s32 *, M2C_UNK, s32);           /* extern */
s32 *func_ov123_020ccaa4(M2C_UNK, s32, M2C_UNK);    /* extern */
M2C_UNK func_ov123_020ccb7c(s32 *, u8, u8);         /* extern */
M2C_UNK func_ov123_020cd970();                      /* extern */
extern M2C_UNK data_ov123_020de830;
extern M2C_UNK data_ov123_020e47a4;

void func_ov123_020cd788(void) {
    s32 *temp_r0;

    if (M2C_FIELD(&data_ov123_020e47a4, s32 **, 8) != NULL) {
        func_ov123_020cd970();
    }
    temp_r0                                    = func_ov123_020ccaa4(0, 0x2CF4, 4);
    M2C_FIELD(&data_ov123_020e47a4, s32 **, 8) = temp_r0;
    if (temp_r0 == NULL) {
        return;
    }
    MI_CpuFill8(temp_r0, 0, 0x2CF4);
    *M2C_FIELD(&data_ov123_020e47a4, s32 **, 8) = 0;
    func_ov123_020ccb7c(M2C_FIELD(&data_ov123_020e47a4, s32 **, 8) + 849, M2C_FIELD(&data_ov123_020de830, u8 *, 0),
                        M2C_FIELD(&data_ov123_020de830, u8 *, 1));
}
