/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_ov004_020c8d4c(void *arg0, s32 arg1) {
    s32 var_r3;
    void *temp_r2;
    void *var_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 4);
    if ((temp_r2 == NULL) || (arg1 >= (s32) M2C_FIELD(temp_r2, u16 *, 6))) {
        return NULL;
    }
    var_r2 = temp_r2 + 0xC;
    var_r3 = 0;
    if (arg1 > 0) {
        do {
            var_r3 += 1;
            var_r2 += M2C_FIELD(var_r2, s32 *, 4);
        } while (var_r3 < arg1);
    }
    return var_r2 + 8;
}
