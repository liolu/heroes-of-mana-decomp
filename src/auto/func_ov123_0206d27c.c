#include "m2c.h"

extern M2C_UNK OSi_ThreadInfo;

void func_ov123_0206d27c(s32 arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 0x38) = arg0;
    }
}
