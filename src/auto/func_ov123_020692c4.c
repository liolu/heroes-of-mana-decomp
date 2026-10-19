/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200fa98();                            /* extern */
M2C_UNK func_0200faac(M2C_UNK);                            /* extern */
void *func_ov123_02067bac();                        /* extern */

void *func_ov123_020692c4(void) {
    s32 hunt_t;
    void *temp_r4;
    void *var_r5;

    var_r5  = NULL;
    temp_r4 = func_ov123_02067bac();
    hunt_t  = func_0200fa98();
    if ((temp_r4 != NULL) && (M2C_FIELD(temp_r4, s32 *, 0x2260) == 9) && (M2C_FIELD(temp_r4, u8 *, 0x226B) == 0)) {
        var_r5 = temp_r4 + 0x2144;
    }
    func_0200faac(hunt_t);
    return var_r5;
}
