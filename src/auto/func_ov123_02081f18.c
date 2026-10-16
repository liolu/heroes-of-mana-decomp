#include "m2c.h"

M2C_UNK func_ov123_02086078(void **, M2C_UNK *);    /* extern */
void *func_ov123_020996d4(M2C_UNK);                 /* extern */
extern M2C_UNK data_ov123_020dab1c;

s32 func_ov123_02081f18(void **arg0, s32 arg1, s32 arg2, void **arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r2;
    void *temp_r0;
    void *temp_r4;

    temp_r4 = *arg0;
    temp_r0 = func_ov123_020996d4(0x24);
    if (temp_r0 == NULL) {
        func_ov123_02086078(arg0, &data_ov123_020dab1c);
        return 1;
    }
    M2C_FIELD(temp_r0, s32 *, 0)    = arg1;
    M2C_FIELD(temp_r0, s32 *, 4)    = arg2;
    M2C_FIELD(temp_r0, s32 *, 8)    = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x14) = 0;
    if (arg1 == 0) {
        M2C_FIELD(temp_r0, s32 *, 0x18) = 1;
    } else {
        temp_r2                          = M2C_FIELD(temp_r4, s32 *, 0x20C);
        M2C_FIELD(temp_r4, s32 *, 0x20C) = (s32) (temp_r2 + 1);
        M2C_FIELD(temp_r0, s32 *, 0x18)  = temp_r2;
        if ((s32) M2C_FIELD(temp_r4, s32 *, 0x20C) < 2) {
            M2C_FIELD(temp_r4, s32 *, 0x20C) = 2;
        }
    }
    M2C_FIELD(temp_r0, s32 *, 0x1C)    = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC)     = arg5;
    M2C_FIELD(temp_r0, s32 *, 0x10)    = arg6;
    M2C_FIELD(temp_r0, void **, 0x20)  = (void *) M2C_FIELD(temp_r4, void **, 0x424);
    M2C_FIELD(temp_r4, void **, 0x424) = temp_r0;
    *arg3                              = temp_r0;
    return 0;
}
