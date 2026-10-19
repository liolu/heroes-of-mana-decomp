/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_Initialize(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
extern M2C_UNK data_ov003_020ae978;
extern M2C_UNK data_ov003_020b7ec0;
extern M2C_UNK WH_StateOutInitialize;

s32 WH_StateInInitialize(void) {
    M2C_UNK var_r0;

    WH_ChangeSysState(3);
    if (WM_Initialize(&data_ov003_020b7ec0, &WH_StateOutInitialize, 1) == 2) {
        var_r0 = 1;
    } else {
        WH_SetError();
        WH_ChangeSysState(0xA);
        var_r0 = 0;
    }
    return var_r0;
}
