/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0207a58c(s32, s32);              /* extern */
s32 func_ov123_02083774(void **, M2C_UNK, s32 *);   /* extern */

void func_ov123_02083740(void **arg0, M2C_UNK arg1) {
    s32 sp0;
    void *temp_r4;

    temp_r4 = *arg0;
    if (func_ov123_02083774(arg0, arg1, &sp0) == 0) {
        return;
    }
    func_ov123_0207a58c(M2C_FIELD(temp_r4, s32 *, 0x428), sp0);
}
