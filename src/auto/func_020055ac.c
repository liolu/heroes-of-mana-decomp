/* compiler: 1.2/sp3  */
#include "m2c.h"

s32 NNS_FndAllocFromFrmHeapEx(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK NNS_FndAppendListObject(void *, s32);       /* extern */
M2C_UNK func_02005630();                            /* extern */

s32 func_020055ac(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = NNS_FndAllocFromFrmHeapEx(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02005630();
    NNS_FndAppendListObject(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
