/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020ad238;

s32 evenOrOdd(M2C_UNK arg0) {
    M2C_UNK var_r0;

    if (arg0 & 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
