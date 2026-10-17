/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207a7c4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern s32 data_ov123_020e1650;
extern M2C_UNK func_ov123_0208eb90;
extern M2C_UNK func_ov123_0208eba0;
extern M2C_UNK func_ov123_0208ebb4;

s32 func_ov123_0208eb2c(void) {
    if (data_ov123_020e1650 == 0) {
        data_ov123_020e1650 =
            func_ov123_0207a7c4(8, 0x64, 2, &func_ov123_0208ebb4, &func_ov123_0208eba0, &func_ov123_0208eb90);
    }
    return data_ov123_020e1650;
}
