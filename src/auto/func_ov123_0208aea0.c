/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02024c28(M2C_UNK *);                       /* extern */
extern M2C_UNK data_ov123_020db568;

void func_ov123_0208aea0(M2C_UNK **arg0, s32 *arg1) {
    M2C_UNK *temp_r2;

    temp_r2 = *arg0;
    if (temp_r2 == NULL) {
        *arg0 = &data_ov123_020db568;
        *arg1 = 0;
        return;
    }
    if (*arg1 != -1) {
        return;
    }
    *arg1 = func_02024c28(temp_r2) + 1;
}
