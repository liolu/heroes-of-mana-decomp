/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020c7518();                          /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */

void func_ov123_020c758c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_ov123_020c7718();
        func_ov123_020c7738(9);
        return;
    }
    if (func_ov123_020c7518() != 0) {
        return;
    }
    func_ov123_020c7738(9);
}
