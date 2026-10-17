/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_02079f78(s32 *, s32);            /* extern */
M2C_UNK func_ov123_0207a3d8(s32 *, s32);            /* extern */
extern M2C_UNK data_ov123_020d9b18;
extern M2C_UNK data_ov123_020d9b24;

void func_ov123_02079f1c(s32 *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= (s32) *arg0)) {
        func_02020d04(&data_ov123_020d9b24, &data_ov123_020d9b18, 0, 0xCA);
    }
    func_ov123_0207a3d8(arg0, arg1);
    func_ov123_02079f78(arg0, arg1);
}
