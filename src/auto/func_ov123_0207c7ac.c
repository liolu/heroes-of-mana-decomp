/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0207a748(s32);                   /* extern */
M2C_UNK func_ov123_0207e780(void **, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020996a0(void *);                /* extern */

void func_ov123_0207c7ac(void **arg0) {
    void *temp_r4;

    temp_r4 = *arg0;
    func_ov123_0207e780(arg0, 1);
    func_ov123_020996a0(M2C_FIELD(temp_r4, void **, 0x460));
    M2C_FIELD(temp_r4, void **, 0x460) = NULL;
    func_ov123_0207a748(M2C_FIELD(temp_r4, s32 *, 0x428));
    func_ov123_020996a0(temp_r4);
    *arg0 = NULL;
}
