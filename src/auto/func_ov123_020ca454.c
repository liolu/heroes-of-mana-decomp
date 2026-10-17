/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 OS_DisableIrqMask(M2C_UNK);                     /* extern */
M2C_UNK OS_EnableIrqMask(s32);                      /* extern */
M2C_UNK func_02007bc4(s32, s32);                    /* extern */
extern s32 data_ov123_020e4728;

void func_ov123_020ca454(s32 arg0) {
    s32 temp_r4;

    temp_r4 = OS_DisableIrqMask(1);
    if (arg0 == 0) {
        return;
    }
    func_02007bc4(data_ov123_020e4728, arg0);
    OS_EnableIrqMask(temp_r4);
}
