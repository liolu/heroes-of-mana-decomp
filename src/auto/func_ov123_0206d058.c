/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_YieldThread();                           /* extern */
M2C_UNK func_ov123_0206e744(void *, M2C_UNK);       /* extern */
M2C_UNK func_ov123_0206e758(void *, M2C_UNK);       /* extern */

void func_ov123_0206d058(void *arg0) {
    u8 temp_r1;

    OS_YieldThread();
    temp_r1 = M2C_FIELD(arg0, u8 *, 8);
    if ((u32) (u8) (temp_r1 + 0xFD) <= 1U) {
        func_ov123_0206e744(arg0, 0x19);
        M2C_FIELD(arg0, u8 *, 8) = 7U;
        return;
    }
    if (temp_r1 == 0) {
        return;
    }
    func_ov123_0206e758(arg0, 0x1A);
}
