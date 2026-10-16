/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_020702ac();                          /* extern */
extern s32 data_ov123_020df1fc;

s32 func_ov123_02070284(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (func_ov123_020702ac() == 0) {
        var_r4 = data_ov123_020df1fc;
    }
    return var_r4;
}
