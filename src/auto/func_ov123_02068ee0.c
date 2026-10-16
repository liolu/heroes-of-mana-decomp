/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
void *func_ov123_02067bac();                        /* extern */

s32 func_ov123_02068ee0(void) {
    s32 *temp_r1;
    s32 temp_r5;
    s32 var_r4;
    void *temp_r0;

    temp_r5 = func_0200fa98();
    temp_r0 = func_ov123_02067bac();
    var_r4  = 0;
    if (temp_r0 == NULL) {
        func_0200faac(temp_r5);
        return 0;
    }
    temp_r1 = M2C_FIELD(temp_r0, s32 **, 0x2270);
    if ((temp_r1 != NULL) && ((u32) M2C_FIELD(temp_r0, u32 *, 0x2274) > 0xCU)) {
        var_r4 = *temp_r1;
    }
    func_0200faac(temp_r5);
    return var_r4;
}
