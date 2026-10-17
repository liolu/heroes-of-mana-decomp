/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0207c64c(void **);               /* extern */
M2C_UNK func_ov123_0207e780(void **, M2C_UNK);      /* extern */

void func_ov123_0207beec(void **arg0) {
    void *temp_r1;

    if (arg0 == NULL) {
        return;
    }
    temp_r1 = *arg0;
    if (temp_r1 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r1, s32 *, 0x108) != 0) {
        return;
    }
    func_ov123_0207e780(arg0, 1);
    func_ov123_0207c64c(arg0);
}
