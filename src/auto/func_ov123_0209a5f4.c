/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0209a880(M2C_UNK);               /* extern */
M2C_UNK func_ov123_0209cd6c();                      /* extern */
extern void *data_ov123_020e1748;

void func_ov123_0209a5f4(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r3)(s32, s32, s32);

    if (arg0 == 0) {
        M2C_FIELD(data_ov123_020e1748, s32 *, 0x64) = arg1;
        func_ov123_0209a880(3);
        func_ov123_0209cd6c();
    } else {
        func_ov123_0209a880(0);
    }
    temp_r3 = M2C_FIELD(data_ov123_020e1748, M2C_UNK(**)(s32, s32, s32), 0x70);
    if (temp_r3 == NULL) {
        return;
    }
    temp_r3(arg0, arg1, M2C_FIELD(data_ov123_020e1748, s32 *, 0x74));
}
