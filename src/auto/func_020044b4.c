/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK NNSi_SndFaderSet(void *, s32, M2C_UNK);              /* extern */

void func_020044b4(void **arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r3, u8 *, 0x2C) == 2) {
        return;
    }
    NNSi_SndFaderSet(temp_r3 + 0x1C, arg1 << 8, arg2);
}
