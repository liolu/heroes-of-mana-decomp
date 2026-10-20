/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 *SearchObjPalSub(s32, s32, s32);            /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020a8694;

s32 SearchObjPal(void *arg0, void *arg1) {
    s32 *temp_r0;
    s32 var_r0;

    temp_r0 = SearchObjPalSub(data_ov000_02051548 + 0x244, arg0, arg1);
    if (temp_r0 != NULL) {
        var_r0 = *temp_r0;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
