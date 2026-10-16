#include "m2c.h"

s32 func_ov123_02091360();                          /* extern */
M2C_UNK func_ov123_020913d8(M2C_UNK);               /* extern */
s32 func_ov123_02092374();                          /* extern */
s32 func_ov123_020924b0();                          /* extern */

s32 func_ov123_020925cc(void) {
    s32 var_r4;

    var_r4 = func_ov123_02091360();
    func_ov123_020913d8(0x10);
    switch (var_r4) {                               /* irregular */
        case 7:
            var_r4 = func_ov123_020924b0();
            break;
        case 8:
            var_r4 = func_ov123_02092374();
            break;
    }
    return var_r4;
}
