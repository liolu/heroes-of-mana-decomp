/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 func_ov121_020f4188(s32);                       /* extern */
extern M2C_UNK data_ov000_020505bc;
extern s32 data_ov000_02051540;

s32 LocGetUpdateParent(void *arg0) {
    s32 var_r0;

    if (data_ov000_02051540 == 0) {
        var_r0 = 0;
    } else {
        var_r0 = func_ov121_020f4188(arg0);
    }
    return var_r0;
}
