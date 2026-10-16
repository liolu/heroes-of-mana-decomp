#include "m2c.h"

s32 func_ov004_020c8cc4(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    if (temp_r3 == NULL) {
        return 0;
    }
    if ((M2C_FIELD(temp_r3, u8 *, 0) == M2C_FIELD(arg1, s8 *, 0)) &&
        (M2C_FIELD(temp_r3, u8 *, 1) == M2C_FIELD(arg1, s8 *, 1)) &&
        (M2C_FIELD(temp_r3, u8 *, 2) == M2C_FIELD(arg1, s8 *, 2)) &&
        (M2C_FIELD(temp_r3, u8 *, 3) == M2C_FIELD(arg1, s8 *, 3))) {
        return 1;
    }
    return 0;
}
