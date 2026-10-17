/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_JoinThread(void *);                      /* extern */
M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
M2C_UNK func_ov123_020972a4();                      /* extern */
extern void *data_ov123_020e1678;

void func_ov123_020957d0(void) {
    if (data_ov123_020e1678 == NULL) {
        return;
    }
    OS_LockMutex(data_ov123_020e1678 + 0x13D8);
    M2C_FIELD(data_ov123_020e1678, s32 *, 0x13F0) = 1;
    func_0200e644(data_ov123_020e1678 + 0x13D8);
    if (M2C_FIELD(data_ov123_020e1678, s32 *, 0x1314) != 0) {
        func_ov123_020972a4();
    }
    if (M2C_FIELD(data_ov123_020e1678, s32 *, 0x1384) == 0) {
        return;
    }
    OS_JoinThread(data_ov123_020e1678 + 0x1318);
}
