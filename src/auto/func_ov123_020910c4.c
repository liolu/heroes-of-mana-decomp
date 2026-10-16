#include "m2c.h"

M2C_UNK func_ov123_02079f1c(s32, M2C_UNK);          /* extern */
s32 *func_ov123_0207a194(s32);                      /* extern */
M2C_UNK func_ov123_02091110(void *, s32);           /* extern */

void func_ov123_020910c4(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = *func_ov123_0207a194(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK, s32, s32), 0x488)(arg0, 2, temp_r4, M2C_FIELD(arg0, s32 *, 0x494));
    func_ov123_02079f1c(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_ov123_02091110(arg0, temp_r4);
}
