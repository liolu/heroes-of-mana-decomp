/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_0206d014();                      /* extern */

s32 func_ov123_0207299c(void *arg0) {
    s32 var_r1;
    s8 temp_r0;

    var_r1  = 1;
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x73);
    if ((temp_r0 != 0) && (temp_r0 != 4)) {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        func_ov123_0206d014();
    }
    return 0;
}
