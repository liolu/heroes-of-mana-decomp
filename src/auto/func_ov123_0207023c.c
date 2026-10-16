/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_020702ac();                          /* extern */
extern s32 data_ov123_020df1ec;

s32 func_ov123_0207023c(s32 arg0) {
    s32 temp_r1;
    s32 var_r4;

    var_r4 = 0;
    if (func_ov123_020702ac() != 0) {
        temp_r1 = ~data_ov123_020df1ec;
        if (temp_r1 == (temp_r1 & arg0)) {
            var_r4 = 1;
        }
    }
    return var_r4;
}
