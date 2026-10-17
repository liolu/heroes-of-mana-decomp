/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
extern void *data_ov123_020e1694;

s32 func_ov123_02098630(void) {
    s32 temp_r4;

    OS_LockMutex(data_ov123_020e1694 + 0x11DC);
    temp_r4 = M2C_FIELD(data_ov123_020e1694, s32 *, 0x1000);
    func_0200e644(data_ov123_020e1694 + 0x11DC);
    return temp_r4;
}
