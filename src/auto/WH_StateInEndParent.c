/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_EndParent(M2C_UNK *);                        /* extern */
M2C_UNK WH_SetError();                      /* extern */
extern M2C_UNK data_ov003_020ae3c8;
extern M2C_UNK WH_StateOutEndParent;

s32 WH_StateInEndParent(void) {
    M2C_UNK var_r0;

    if (WM_EndParent(&WH_StateOutEndParent) == 2) {
        var_r0 = 1;
    } else {
        WH_SetError();
        var_r0 = 0;
    }
    return var_r0;
}
