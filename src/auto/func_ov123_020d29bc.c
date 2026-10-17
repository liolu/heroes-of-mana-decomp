#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, s32);       /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */

void func_ov123_020d29bc(void *arg0, s32 arg1) {
    s32 temp_r4;

    if (arg1 == 0) {
        return;
    }
    temp_r4 = func_0200fa98();
    OS_FreeToHeap(0, -1, arg1);
    func_0200faac(temp_r4);
}
