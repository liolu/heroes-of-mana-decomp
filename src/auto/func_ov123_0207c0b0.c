/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207c16c(void **, M2C_UNK);          /* extern */

s32 func_ov123_0207c0b0(void **arg0) {
    void *temp_r1;

    if ((arg0 == NULL) || (temp_r1 = *arg0, (temp_r1 == NULL))) {
        return 2;
    }
    if (M2C_FIELD(temp_r1, s32 *, 0x108) != 0) {
        return 0;
    }
    return func_ov123_0207c16c(arg0, 0);
}
