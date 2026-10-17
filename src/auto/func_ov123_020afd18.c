/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020af55c(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
extern void *data_ov123_020e45bc;

void func_ov123_020afd18(void) {
    M2C_UNK var_r0;

    if (M2C_FIELD(data_ov123_020e45bc, u8 *, 0x11D) != 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    func_ov123_020af55c(var_r0);
    func_ov123_020c36bc(1);
}
