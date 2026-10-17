/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, void *, M2C_UNK); /* extern */
extern void *data_ov123_020e4720;
extern M2C_UNK func_ov123_020c9560;

s32 func_ov123_020c95a4(s16 arg0) {
    void *temp_r4;

    temp_r4 = data_ov123_020e4720;
    if (M2C_FIELD(temp_r4, u8 *, 9) != 0) {
        return 0;
    }
    M2C_FIELD(temp_r4, s32 *, 0) = func_ov123_020cb6ac(1, &func_ov123_020c9560, temp_r4, 0xC8);
    M2C_FIELD(temp_r4, s16 *, 4) = 0;
    M2C_FIELD(temp_r4, s16 *, 6) = arg0;
    M2C_FIELD(temp_r4, s8 *, 9)  = 1;
    return 1;
}
