/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c7718();                      /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */

void func_ov123_020c6e94(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_ov123_020c7718();
        return;
    }
    func_ov123_020c7738(1);
}
