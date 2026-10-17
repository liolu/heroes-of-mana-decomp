/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK FaceReleaseInMessage(s32, s32);              /* extern */
extern M2C_UNK data_ov000_02051454;

void AllFaceReleaseInMessage(s32 arg5) {
    s32 var_r5;
    s32 var_r6;

    var_r5 = 0;
    do {
        var_r6 = 0;
    loop_2:
        FaceReleaseInMessage(var_r6, var_r5);
        var_r6 += 1;
        if (var_r6 < 2) {
            goto loop_2;
        }
        var_r5 += 1;
    } while (var_r5 < 2);
}
