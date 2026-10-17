/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020885d4();                          /* extern */
M2C_UNK func_ov123_0209aa14();                      /* extern */

s32 func_ov123_020a4514(void) {
    s32 var_r0;

    func_ov123_0209aa14();
    var_r0 = func_ov123_020885d4() + 0xFFFFFDF9;
    if (var_r0 <= 0) {
        var_r0 = 0;
    }
    return var_r0;
}
