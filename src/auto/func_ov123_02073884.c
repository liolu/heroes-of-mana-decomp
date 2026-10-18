/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 *(*data_ov123_020e0a80)(M2C_UNK, s32);

s32 *func_ov123_02073884(s32 arg0) {
    s32 *var_r0;
    s32 temp_r4;

    temp_r4 = arg0 + 4;
    var_r0  = data_ov123_020e0a80(0, temp_r4);
    if (var_r0 != NULL) {
        *var_r0 = temp_r4;
        var_r0  = (void *) ((u8 *) (u8 *) var_r0 + 4);
    }
    return var_r0;
}
