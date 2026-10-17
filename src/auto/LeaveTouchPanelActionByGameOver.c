/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aae7c;

s32 LeaveTouchPanelActionByGameOver(void) {
    M2C_UNK var_r0;

    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x18) << 0xC) >> 0x1E) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
