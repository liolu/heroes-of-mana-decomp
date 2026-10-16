#include "m2c.h"

extern M2C_UNK OSi_ThreadInfo;

void func_ov123_0206d2f8(void) {
    s32 *temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), s32 **, 0xA4);
    if (temp_r1 != NULL) {
        *temp_r1 = 0;
    }
}
