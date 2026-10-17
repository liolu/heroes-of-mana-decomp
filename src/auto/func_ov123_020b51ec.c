/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_SpinWait(M2C_UNK);                       /* extern */
M2C_UNK PM_ForceToPowerOff();                       /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */

void func_ov123_020b51ec(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    OS_SpinWait(0x01000000);
    PM_ForceToPowerOff();
}
