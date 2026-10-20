/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuFill8(s32, M2C_UNK, s32);             /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
void *func_ov123_02067bac();                        /* extern */

void func_ov123_02068f4c(void) {
    s32 temp_r0_2;
    s32 temp_r4;
    void *temp_r0;
    s32 n;

    temp_r4 = func_0200fa98();
    temp_r0 = func_ov123_02067bac();
    if (temp_r0 == NULL) {
        func_0200faac(temp_r4);
        return;
    }
    temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 0x2270);
    if (temp_r0_2 != 0) {
        n = M2C_FIELD(temp_r0, s32 *, 0x2274);
        if (n > 0) {
            MI_CpuFill8(temp_r0_2, 0, n);
        }
    }
    func_0200faac(temp_r4);
}
