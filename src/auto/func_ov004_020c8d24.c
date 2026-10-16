#include "m2c.h"

s32 func_ov004_020c8d24(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 4);
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, s32 *, 8);
    }
    return 0;
}
