/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020ae4ec;
extern M2C_UNK data_ov003_020b6440;

s32 WH_EndScan(void) {
    M2C_UNK var_r0;

    if (M2C_FIELD(&data_ov003_020b6440, s32 *, 0x10) != 2) {
        var_r0 = 0;
    } else {
        M2C_FIELD(&data_ov003_020b6440, s16 *, 0xC) = 0;
        WH_ChangeSysState(3);
        var_r0 = 1;
    }
    return var_r0;
}
