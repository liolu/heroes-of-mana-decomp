/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK DC_StoreRange(s32, s32);                    /* extern */
s32 NNS_SndArcGetFileSize();                        /* extern */
s32 NNS_SndHeapAlloc(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_02004ea0(M2C_UNK, s32, s32, M2C_UNK);      /* extern */

s32 func_02005e1c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = NNS_SndArcGetFileSize();
    if (temp_r0_2 == 0) {
        return 0;
    }
    if (arg4 == 0) {
        return 0;
    }
    temp_r0 = NNS_SndHeapAlloc(arg4, temp_r0_2 + 0x20, arg1, arg2, arg3);
    if (temp_r0 == 0) {
        return 0;
    }
    if (temp_r0_2 != func_02004ea0(arg0, temp_r0, temp_r0_2, 0)) {
        return 0;
    }
    DC_StoreRange(temp_r0, temp_r0_2);
    return temp_r0;
}
