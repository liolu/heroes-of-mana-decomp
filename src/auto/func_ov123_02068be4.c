/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_ov123_02067bac();                        /* extern */

s32 func_ov123_02068be4(void) {
    void *temp_r0;
    void *temp_r1;

    temp_r0 = func_ov123_02067bac();
    temp_r1 = M2C_FIELD(temp_r0, void **, 0x2270);
    if ((temp_r1 != NULL) && ((u32) M2C_FIELD(temp_r0, u32 *, 0x2274) > 0xCU)) {
        return M2C_FIELD(temp_r1, s32 *, 4);
    }
    return 0;
}
