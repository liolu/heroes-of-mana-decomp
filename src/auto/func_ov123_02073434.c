/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 *func_ov123_02073408();                         /* extern */

void func_ov123_02073434(void *arg0, void *arg1) {
    s32 *temp_r0;

    temp_r0 = func_ov123_02073408();
    if (temp_r0 != NULL) {
        *temp_r0 = M2C_FIELD(arg1, s32 *, 0x7C);
    }
}
