/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0209a704(M2C_UNK);               /* extern */

void func_ov123_0209a59c(void *arg0, void *arg1) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0x603:
            return;
        case 0x901:
            return;
        case 0xB01:
            return;
        default:
            func_ov123_0209a704(3);
            return;
    }
}
