/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207a904(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_ov123_02083a58;
extern M2C_UNK func_ov123_02083ad4;
extern M2C_UNK func_ov123_02083ae4;

s32 func_ov123_020839fc(void **arg0) {
    void *temp_r4;

    temp_r4                          = *arg0;
    M2C_FIELD(temp_r4, s32 *, 0x430) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x42C) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x428) =
        func_ov123_0207a904(0x1C, 4, &func_ov123_02083ae4, &func_ov123_02083ad4, &func_ov123_02083a58);
    if (M2C_FIELD(temp_r4, s32 *, 0x428) != 0) {
        return 1;
    }
    return 0;
}
