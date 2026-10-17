/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_0201ace4(s32);                             /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
extern s32 data_ov123_020e4708;

s32 func_ov123_020c70ec(void) {
    if (func_0201ace4(data_ov123_020e4708 + 0x1E00) == 2) {
        return 1;
    }
    func_ov123_020c7718();
    return 0;
}
