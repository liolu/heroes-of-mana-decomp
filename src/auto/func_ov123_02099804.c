/* compiler: 1.2/sp3 */
#include "m2c.h"

u32 func_ov123_02091668();                          /* extern */
M2C_UNK func_ov123_02099524(M2C_UNK, s32);          /* extern */
s32 func_ov123_02099868();                          /* extern */
M2C_UNK func_ov123_02099910();                      /* extern */
M2C_UNK func_ov123_02099a3c();                      /* extern */

s32 func_ov123_02099804(void) {
    u32 var_r2;

    func_ov123_02099a3c();
    if (func_ov123_02099868() != 0) {
        var_r2 = func_ov123_02091668();
        if (var_r2 > 0x63U) {
            var_r2 = 0x63;
        }
        func_ov123_02099524(8, 0xFFFF2D10 - var_r2);
        func_ov123_02099910();
        return 1;
    }
    return 0;
}
