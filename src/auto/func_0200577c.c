/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK NNS_FndDestroyFrmHeap(s32);                 /* extern */
s32 func_020055f4(u32, s32);                        /* extern */
s32 func_02008238(s32, s32, M2C_UNK);               /* extern */

u32 func_0200577c(s32 arg0, s32 arg1) {
    s32 temp_r0_2;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r5;

    temp_r0 = arg0 + arg1;
    temp_r5 = (arg0 + 3) & ~3;
    if (temp_r5 > temp_r0) {
        return 0U;
    }
    temp_r1 = temp_r0 - temp_r5;
    if (temp_r1 < 0x10U) {
        return 0U;
    }
    temp_r0_2 = func_02008238(temp_r5 + 0x10, temp_r1 - 0x10, 0);
    if (temp_r0_2 == 0) {
        return 0U;
    }
    if (func_020055f4(temp_r5, temp_r0_2) != 0) {
        return temp_r5;
    }
    NNS_FndDestroyFrmHeap(temp_r0_2);
    return 0U;
}
