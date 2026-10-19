/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aab88;
extern M2C_UNK data_ov003_020b5380;
extern M2C_UNK data_ov003_020b557c;

s32 checkConnectParent(void) {
    M2C_UNK var_r0;

    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) << 0x1F) >> 0x1F) != 0) {
        var_r0 = 0;
    } else if (((u32) (*(&data_ov003_020b557c + (((u32) (M2C_FIELD(&data_ov003_020b5380, s32 *, 0x174) << 0x1B) >> 0x1B) * 48))
                       << 0x1F) >>
                0x1F) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
