/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020cb5f8(M2C_UNK, M2C_UNK);      /* extern */

void func_ov123_020c9560(M2C_UNK arg0, void *arg1) {
    M2C_FIELD(arg1, s16 *, 4) = (s16) (M2C_FIELD(arg1, s16 *, 4) + 1);
    if ((s32) M2C_FIELD(arg1, s16 *, 4) < (s32) M2C_FIELD(arg1, u16 *, 6)) {
        return;
    }
    M2C_FIELD(arg1, s8 *, 9) = 0;
    func_ov123_020cb5f8(1, arg0);
}
