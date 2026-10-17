/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov000_02050a00;
extern void *data_ov000_02051548;

s32 GetItemAdrsForRetry(void) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = M2C_FIELD(data_ov000_02051548, s32 *, 0x770);
    if (temp_r0 != 0) {
        var_r0 = temp_r0 + 0x14;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
