/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_YieldThread();                           /* extern */
M2C_UNK func_0200e0a4();                            /* extern */
extern s32 data_ov123_020df1f4;

void func_ov123_02070830(void) {
    if (data_ov123_020df1f4 == 0) {
        OS_YieldThread();
        return;
    }
    func_0200e0a4();
}
