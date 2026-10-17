/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                       /* extern */
M2C_UNK func_0200e644(void *);                      /* extern */
extern void *data_ov123_020e1678;

s32 func_ov123_020956e8(void) {
    s32 temp_r4;

    if (data_ov123_020e1678 == NULL) {
        return 0x16;
    }
    OS_LockMutex(data_ov123_020e1678 + 0x13D8);
    temp_r4 = M2C_FIELD(data_ov123_020e1678, s32 *, 0x1004);
    func_0200e644(data_ov123_020e1678 + 0x13D8);
    return temp_r4;
}
