#include "m2c.h"

void *func_ov123_020ce8e0();                        /* extern */
extern M2C_UNK data_ov123_020de85c;

void *func_ov123_020ce918(void *arg0) {
    void *temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov123_020de85c;
    temp_r0                        = func_ov123_020ce8e0();
    if ((s32) M2C_FIELD(temp_r0, s32 *, 0) <= 0) {
        M2C_FIELD(arg0, void **, 4)    = NULL;
        M2C_FIELD(arg0, s32 *, 8)      = 0;
        M2C_FIELD(temp_r0, void **, 4) = arg0;
    } else {
        M2C_FIELD(arg0, void **, 4)                           = (void *) M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(arg0, s32 *, 8)                             = 0;
        M2C_FIELD(M2C_FIELD(temp_r0, void **, 8), void **, 8) = arg0;
    }
    M2C_FIELD(temp_r0, void **, 8) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0)   = (s32) (M2C_FIELD(temp_r0, s32 *, 0) + 1);
    return arg0;
}
