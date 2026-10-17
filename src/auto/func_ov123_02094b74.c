/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
extern void *data_ov123_020e1678;

void func_ov123_02094b74(s32 arg0) {
    OS_LockMutex(data_ov123_020e1678 + 0x13D8);
    M2C_FIELD(data_ov123_020e1678, s32 *, 0x1004) = arg0;
    func_0200e644(data_ov123_020e1678 + 0x13D8);
}
