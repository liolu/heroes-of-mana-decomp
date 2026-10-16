#include "m2c.h"

u16 func_ov004_020c98b0(void *arg0) {
    u16 *temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 **, 4);
    if (temp_r0 == NULL) {
        return 0U;
    }
    return *temp_r0;
}
