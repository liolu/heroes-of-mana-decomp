/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0208864c();                      /* extern */
s32 func_ov123_02099548();                          /* extern */
s32 func_ov123_0209aa14(M2C_UNK);                   /* extern */
extern void *data_ov123_020e1748;

s32 func_ov123_0209ac2c(M2C_UNK arg0) {
    s32 temp_r0;

    if ((data_ov123_020e1748 == NULL) || (func_ov123_02099548() != 0) ||
        ((temp_r0 = M2C_FIELD(data_ov123_020e1748, s32 *, 0x24), (temp_r0 != 5)) && (temp_r0 != 6))) {
        return -1;
    }
    if (func_ov123_0209aa14(arg0) == 0) {
        return -2;
    }
    func_ov123_0208864c();
    return 0;
}
