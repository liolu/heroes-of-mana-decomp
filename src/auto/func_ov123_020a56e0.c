/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(M2C_UNK, s32 *, M2C_UNK);       /* extern */
s32 func_ov123_020a56b4();                          /* extern */

s32 func_ov123_020a56e0(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 sp4;

    if (func_ov123_020a56b4() == 0) {
        return 0;
    }
    MI_CpuCopy8(arg0, &sp0, 4);
    MI_CpuCopy8(arg1, &sp4, 4);
    if ((sp0 | sp4) == -2) {
        return 0;
    }
    if (sp0 & ~sp4) {
        return 1;
    }
    return 0;
}
