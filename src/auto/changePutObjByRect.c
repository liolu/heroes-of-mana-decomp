/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

u32 SetObjsOnOff(s32 *);                     /* extern */
extern M2C_UNK data_ov003_020a8054;
extern s32 data_ov003_020b0cf0;

s32 changePutObjByRect(s32 arg4) {
    s32 *var_r4;
    s32 var_r5;
    u32 var_r0;

    var_r4 = &data_ov003_020b0cf0;
    var_r5 = 0;
    do {
        var_r0 = (u32) (*var_r4 << 0x1F) >> 0x1F;
        if (var_r0 != 0) {
            var_r0 = SetObjsOnOff(var_r4);
        }
        var_r5 += 1;
        var_r4 = (s32 *) ((u8 *) var_r4 + 0x110);
    } while (var_r5 < 0x42);
    return var_r0;
}
