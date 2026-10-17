/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_02086078(M2C_UNK, M2C_UNK *);    /* extern */
void *func_ov123_020996d4(s32);                     /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK data_ov123_020dae34;

s32 func_ov123_02085b7c(M2C_UNK arg0, void **arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = func_ov123_020996d4(0x144);
    if (temp_r0 == NULL) {
        func_ov123_02086078(arg0, &data_ov123_020dae34);
        return 1;
    }
    memset(temp_r0, 0, 0x144);
    M2C_FIELD(temp_r0, s32 *, 0)      = arg2;
    M2C_FIELD(temp_r0, s32 *, 4)      = -1;
    M2C_FIELD(temp_r0, s32 *, 8)      = 0;
    M2C_FIELD(temp_r0, s32 *, 0x10)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0x14)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC)    = 0;
    M2C_FIELD(temp_r0, s32 *, 0x20)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0x24)   = 0;
    M2C_FIELD(temp_r0, s32 *, 0x1C)   = 0x1000;
    M2C_FIELD(temp_r0, void **, 0x18) = func_ov123_020996d4(M2C_FIELD(temp_r0, s32 *, 0x1C) + 1);
    if (M2C_FIELD(temp_r0, void **, 0x18) != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0x13C) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x140) = 0;
        *arg1                            = temp_r0;
        return 0;
    }
    func_ov123_02086078(arg0, &data_ov123_020dae34);
    return 1;
}
