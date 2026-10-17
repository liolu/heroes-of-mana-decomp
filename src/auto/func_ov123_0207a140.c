/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_0207a088(s32 *, M2C_UNK, s32);   /* extern */
extern M2C_UNK data_ov123_020d9b18;
extern M2C_UNK data_ov123_020d9b70;

void func_ov123_0207a140(s32 *arg0, M2C_UNK arg1) {
    if (arg0 == NULL) {
        func_02020d04(&data_ov123_020d9b70, &data_ov123_020d9b18, 0, 0xA0);
    }
    if (arg0 == NULL) {
        return;
    }
    func_ov123_0207a088(arg0, arg1, *arg0);
}
