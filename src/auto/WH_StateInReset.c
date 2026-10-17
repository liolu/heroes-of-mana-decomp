/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_Reset(M2C_UNK *);                            /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
extern M2C_UNK data_ov003_020ae794;
extern M2C_UNK WH_StateOutReset;

s32 WH_StateInReset(void) {
    M2C_UNK var_r0;

    WH_ChangeSysState(3);
    if (WM_Reset(&WH_StateOutReset) == 2) {
        var_r0 = 1;
    } else {
        WH_SetError();
        var_r0 = 0;
    }
    return var_r0;
}
