/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
extern void *data_ov123_020e1694;

void func_ov123_02097594(s32 arg0) {
    OS_LockMutex(data_ov123_020e1694 + 0x11DC);
    M2C_FIELD(data_ov123_020e1694, s32 *, 0x1000) = arg0;
    func_0200e644(data_ov123_020e1694 + 0x11DC);
}
