/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetConditionShisetu(s32);                       /* extern */
extern M2C_UNK data_ov003_020accec;

s32 checkMakeEndShisetu(s32 arg0) {
    M2C_UNK var_r0;

    if (GetConditionShisetu(arg0) == 2) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
