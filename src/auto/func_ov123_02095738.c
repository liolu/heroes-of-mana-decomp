/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK OS_JoinThread(void *);                      /* extern */
extern void *data_ov123_020e1678;

void func_ov123_02095738(void) {
    if (M2C_FIELD(data_ov123_020e1678, s32 *, 0x1384) == 0) {
        return;
    }
    OS_JoinThread(data_ov123_020e1678 + 0x1318);
}
