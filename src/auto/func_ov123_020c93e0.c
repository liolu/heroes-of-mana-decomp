/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020c887c(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_ov123_020e4718;

void func_ov123_020c93e0(s32 arg0, M2C_UNK arg1) {
    M2C_UNK sp0;

    *(s32 *) ((u8 *) &data_ov123_020e4718 + (arg0 * 4)) = func_ov123_020c887c(arg1, &sp0, 4);
}
