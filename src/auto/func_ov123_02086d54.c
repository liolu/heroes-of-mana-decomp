/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK *func_ov123_02086d74();                     /* extern */
extern M2C_UNK data_ov123_020db3ec;

M2C_UNK *func_ov123_02086d54(void) {
    M2C_UNK *var_r0;

    var_r0 = func_ov123_02086d74();
    if (var_r0 == NULL) {
        var_r0 = &data_ov123_020db3ec;
    }
    return var_r0;
}
