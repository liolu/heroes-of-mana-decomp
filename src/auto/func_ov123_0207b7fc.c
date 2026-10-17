/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02083774(void **, M2C_UNK, void **); /* extern */

s32 func_ov123_0207b7fc(void **arg0, M2C_UNK arg1, s32 *arg2) {
    void *sp0;
    s32 *temp_r0;
    void *temp_r2;

    if ((arg0 == NULL) || (temp_r2 = *arg0, (temp_r2 == NULL))) {
        return 2;
    }
    if (M2C_FIELD(temp_r2, s32 *, 0x108) != 0) {
        *arg2 = 0;
        return 0;
    }
    if ((func_ov123_02083774(arg0, arg1, &sp0) != 0) && (temp_r0 = M2C_FIELD(sp0, s32 **, 8), (temp_r0 != NULL))) {
        *arg2 = *temp_r0;
    } else {
        *arg2 = -1;
    }
    return 0;
}
