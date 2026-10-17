/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 OS_DisableIrqMask(M2C_UNK);                     /* extern */
M2C_UNK OS_EnableIrqMask(s32);                      /* extern */
u8 func_02008ff0(s32, u16);                         /* extern */
M2C_UNK func_0200fddc();                            /* extern */

void func_ov123_020c9468(void *arg0, s32 arg1) {
    s32 temp_r7;
    u8 temp_r0;

    temp_r7 = OS_DisableIrqMask(1);
    temp_r0 = func_02008ff0(M2C_FIELD(arg0, u8 *, 3) + 1, M2C_FIELD(arg0, u16 *, 0));
    if (temp_r0 == M2C_FIELD(arg0, u8 *, 2)) {
        func_0200fddc();
    }
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 3) * 4)), s32 *, 4) = arg1;
    M2C_FIELD(arg0, u8 *, 3)                                     = temp_r0;
    OS_EnableIrqMask(temp_r7);
}
