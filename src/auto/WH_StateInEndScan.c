/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_EndScan(M2C_UNK *);                          /* extern */
M2C_UNK WH_SetError();                      /* extern */
extern M2C_UNK data_ov003_020ae4f8;
extern M2C_UNK WH_StateOutEndScan;

s32 WH_StateInEndScan(void) {
    M2C_UNK var_r0;

    if (WM_EndScan(&WH_StateOutEndScan) == 2) {
        var_r0 = 1;
    } else {
        WH_SetError();
        var_r0 = 0;
    }
    return var_r0;
}
