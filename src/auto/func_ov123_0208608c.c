/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_02086568(void *, M2C_UNK, M2C_UNK); /* extern */

void func_ov123_0208608c(void **arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r4;

    temp_r4 = *arg0;
    func_ov123_02086568(temp_r4, arg2, 0x100);
    M2C_FIELD(temp_r4, s32 *, 0x418) = arg1;
}
