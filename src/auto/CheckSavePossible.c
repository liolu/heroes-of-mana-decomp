/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa638;

s32 CheckSavePossible(void) {
    M2C_UNK var_r0;

    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xC8) << 0x1E) >> 0x1F) == 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
