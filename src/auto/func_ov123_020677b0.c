/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_02067754(s16, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern void *data_ov123_020df180;

void func_ov123_020677b0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s16 temp_r0;

    temp_r0                                       = M2C_FIELD(data_ov123_020df180, s16 *, 0x2280);
    M2C_FIELD(data_ov123_020df180, s16 *, 0x2280) = 0;
    func_ov123_02067754(temp_r0, arg0, arg1, arg2, arg3);
}
