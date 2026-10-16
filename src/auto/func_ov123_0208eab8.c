#include "m2c.h"

M2C_UNK func_ov123_0207a748(s32);                   /* extern */
M2C_UNK func_ov123_020996a0(void *);                /* extern */

void func_ov123_0208eab8(void **arg0) {
    void *temp_r4;

    temp_r4 = *arg0;
    func_ov123_0207a748(M2C_FIELD(temp_r4, s32 *, 0x18));
    M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
    func_ov123_020996a0(temp_r4);
}
