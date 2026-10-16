#include "m2c.h"

s32 func_ov123_02081dc4(void **arg0, void **arg1, s32 arg2) {
    void *var_r3;

    var_r3 = M2C_FIELD(*arg0, void **, 0x424);
    if (var_r3 != NULL) {
    loop_1:
        if (M2C_FIELD(var_r3, s32 *, 0x18) == arg2) {
            if (arg1 != NULL) {
                *arg1 = var_r3;
            }
            return 1;
        }
        var_r3 = M2C_FIELD(var_r3, void **, 0x20);
        if (var_r3 == NULL) {
            goto block_6;
        }
        goto loop_1;
    }
block_6:
    if (arg1 != NULL) {
        *arg1 = NULL;
    }
    return 0;
}
