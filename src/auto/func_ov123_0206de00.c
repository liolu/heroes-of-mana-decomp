/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_WakeupThreadDirect(s32);                 /* extern */
M2C_UNK OS_YieldThread();                           /* extern */
void *func_ov123_0206e89c();                        /* extern */

void func_ov123_0206de00(void) {
    void *temp_r0;

    temp_r0 = func_ov123_0206e89c();
    if (temp_r0 == NULL) {
        return;
    }
    OS_YieldThread();
    M2C_FIELD(temp_r0, s8 *, 8) = 0;
    if ((u32) (M2C_FIELD(temp_r0, s32 *, 4) - 1) > 1U) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 4) = 0;
    OS_WakeupThreadDirect(M2C_FIELD(temp_r0, s32 *, 0));
}
