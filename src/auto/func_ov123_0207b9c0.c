/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0207b9c0(void **arg0, s32 *arg1) {
    void *temp_r2;

    if ((arg0 == NULL) || (temp_r2 = *arg0, (temp_r2 == NULL))) {
        return 2;
    }
    if (M2C_FIELD(temp_r2, s32 *, 0x108) != 0) {
        *arg1 = 0;
        return 0;
    }
    *arg1 = M2C_FIELD(temp_r2, s32 *, 0x430);
    return 0;
}
