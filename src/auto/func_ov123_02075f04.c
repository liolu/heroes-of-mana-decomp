/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_02075f44(void *);                /* extern */
M2C_UNK func_ov123_0207614c(void *);                /* extern */
M2C_UNK func_ov123_02076258(void *, M2C_UNK, s32);  /* extern */
M2C_UNK func_ov123_020775f0(void *, M2C_UNK, M2C_UNK); /* extern */

void func_ov123_02075f04(void *arg0, M2C_UNK arg1) {
    func_ov123_02076258(arg0, arg1, M2C_FIELD(arg0, s32 *, 0x81C));
    func_ov123_0207614c(arg0);
    func_ov123_020775f0(arg0, 0, 0);
    func_ov123_02075f44(arg0);
    M2C_FIELD(arg0, s8 *, 0x455) = 5;
}
