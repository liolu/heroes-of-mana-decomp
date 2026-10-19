/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020aaa28;
extern M2C_UNK data_ov003_020b5380;

s32 EndGiveDataCheck(void) {
    M2C_UNK var_r0;

    if (M2C_FIELD(&data_ov003_020b5380, s32 *, 0x19C) != 0) {
        var_r0 = 0;
    } else if (((u32) (M2C_FIELD(&data_ov003_020b5380, s32 *, 0x174) << 0x1A) >> 0x1F) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
