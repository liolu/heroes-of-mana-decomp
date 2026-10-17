/* compiler: 1.2/sp3 */
#include "m2c.h"

void *func_ov123_020913d8(M2C_UNK);                 /* extern */

void func_ov123_02091550(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_r2;
    void *temp_r0;

    temp_r0 = func_ov123_020913d8(1);
    temp_r2 = M2C_FIELD(temp_r0, u8 *, 8);
    if (!(temp_r2 & arg0)) {
        return;
    }
    M2C_FIELD(temp_r0, u8 *, 8) = (u8) (temp_r2 & ~arg0);
    M2C_FIELD(temp_r0, M2C_UNK(**)(s32, M2C_UNK, M2C_UNK), 4)(arg0, arg1, arg2);
}
