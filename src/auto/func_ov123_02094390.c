/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MI_CpuFill8(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_ov123_02094a0c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_02094ac0(M2C_UNK, M2C_UNK);      /* extern */

void func_ov123_02094390(M2C_UNK arg0, M2C_UNK arg1) {
    MI_CpuFill8(arg0, 0, 0xC);
    func_ov123_02094ac0(arg0, arg1);
    func_ov123_02094a0c(arg0, 3);
}
