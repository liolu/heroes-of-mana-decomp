/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 MB_StartParentFromIdle(M2C_UNK);                /* extern */
M2C_UNK func_0200fddc();                            /* extern */
M2C_UNK func_ov123_020c58f4(M2C_UNK);               /* extern */
s32 func_ov123_020c616c(M2C_UNK);                   /* extern */

void func_ov123_020c6240(M2C_UNK arg0, M2C_UNK arg1) {
    func_ov123_020c58f4(2);
    if (MB_StartParentFromIdle(arg1) != 0) {
        func_ov123_020c58f4(7);
        return;
    }
    if (func_ov123_020c616c(arg0) != 0) {
        return;
    }
    func_0200fddc();
}
