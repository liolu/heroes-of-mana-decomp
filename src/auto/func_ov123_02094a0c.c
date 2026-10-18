/* compiler: 1.2/sp3 */
#include "m2c.h"
M2C_UNK func_ov123_02094a38(M2C_UNK, s32);
s32 func_ov123_02094aac();
void func_ov123_02094a0c(M2C_UNK arg0, s32 arg1) {
    s32 t = func_ov123_02094aac() & ~3;
    t |= arg1;
    func_ov123_02094a38(arg0, t);
}
