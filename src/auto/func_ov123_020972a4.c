/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_JoinThread(void *);                      /* extern */
M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */

void func_ov123_020972a4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1000) != 0xFF) {
        return;
    }
    OS_LockMutex(arg0 + 0x1BF8);
    M2C_FIELD(arg0, s32 *, 0x1C10) = 1;
    func_0200e644(arg0 + 0x1BF8);
    if (M2C_FIELD(arg0, s32 *, 0x1BA4) == 0) {
        return;
    }
    OS_JoinThread(arg0 + 0x1B38);
}
