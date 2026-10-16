/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 OS_GetThreadPriority(s32);                      /* extern */
M2C_UNK OS_SetThreadPriority(s32, u32);             /* extern */
extern M2C_UNK OSi_ThreadInfo;
extern u32 data_ov123_020d98c4;

s32 func_ov123_020774d4(void) {
    s32 temp_r4;
    s32 temp_r5;

    if ((u32) data_ov123_020d98c4 >= 0x20U) {
        return -1;
    }
    temp_r5 = M2C_FIELD(&OSi_ThreadInfo, s32 *, 4);
    temp_r4 = OS_GetThreadPriority(temp_r5);
    OS_SetThreadPriority(temp_r5, data_ov123_020d98c4);
    return temp_r4;
}
