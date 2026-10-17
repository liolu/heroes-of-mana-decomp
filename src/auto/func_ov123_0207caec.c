#include "m2c.h"

s32 func_ov123_0207caec(void *arg0, void *arg1, s32 arg2) {
    s32 *temp_r1;
    s32 temp_r0;

    temp_r1 = M2C_FIELD(arg1, s32 **, 8);
    if (temp_r1 != NULL) {
        temp_r0 = *temp_r1;
        if (temp_r0 > arg2) {
            *temp_r1 = temp_r0 - 1;
        }
    }
    return 1;
}
