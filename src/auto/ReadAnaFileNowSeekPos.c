/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 func_0201360c(M2C_UNK *, s32, s32);             /* extern */
extern M2C_UNK data_02036744;
extern M2C_UNK data_ov000_020508a0;

s32 ReadAnaFileNowSeekPos(void *arg0, void *arg1) {
    M2C_UNK var_r0;

    if (func_0201360c(&data_02036744, arg0, arg1) != -1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
