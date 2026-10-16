#include "m2c.h"

s32 OS_DisableIrqMask(M2C_UNK);                     /* extern */
M2C_UNK OS_EnableIrqMask(s32);                      /* extern */
s32 func_02007c00(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0200fddc();                            /* extern */
extern s32 data_ov123_020e4728;

s32 func_ov123_020ca510(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 temp_r0;

    temp_r4 = OS_DisableIrqMask(1);
    temp_r0 = func_02007c00(data_ov123_020e4728, arg0, arg1);
    if (temp_r0 == 0) {
        func_0200fddc();
    }
    OS_EnableIrqMask(temp_r4);
    return temp_r0;
}
