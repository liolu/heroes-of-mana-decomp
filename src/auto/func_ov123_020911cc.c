/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_0207a140(s32, s32 *);            /* extern */

void func_ov123_020911cc(void *arg0, M2C_UNK arg1) {
    func_ov123_0207a140(M2C_FIELD(arg0, s32 *, 4), &arg1);
    M2C_FIELD(arg0, M2C_UNK (**)(void *, M2C_UNK, s32, s32), 0x488)(arg0, 0, arg1, M2C_FIELD(arg0, s32 *, 0x494));
}
