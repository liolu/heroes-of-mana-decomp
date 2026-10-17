/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c9af4(M2C_UNK);               /* extern */
extern u8 data_ov123_020e456c;

s32 func_ov123_020ae260(void) {
    if (data_ov123_020e456c == 0) {
        return 0;
    }
    func_ov123_020c9af4(1);
    data_ov123_020e456c = 0;
    return 1;
}
