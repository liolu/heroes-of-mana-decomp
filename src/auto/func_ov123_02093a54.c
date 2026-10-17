/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_02091334(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020913d8(M2C_UNK);               /* extern */
s32 func_ov123_020987f4();                          /* extern */

s32 func_ov123_02093a54(void) {
    func_ov123_020913d8(8);
    if (func_ov123_020987f4() == 0) {
        return 0xE;
    }
    func_ov123_02091334(3);
    return 0x11;
}
