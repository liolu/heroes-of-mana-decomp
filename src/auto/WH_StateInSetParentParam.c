/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_SetParentParameter(M2C_UNK *, M2C_UNK *);    /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
extern M2C_UNK data_ov003_020ae168;
extern M2C_UNK data_ov003_020b64e0;
extern M2C_UNK WH_StateOutSetParentParam;

s32 WH_StateInSetParentParam(void) {
    M2C_UNK var_r0;

    WH_ChangeSysState(3);
    if (WM_SetParentParameter(&WH_StateOutSetParentParam, &data_ov003_020b64e0) == 2) {
        var_r0 = 1;
    } else {
        WH_SetError();
        WH_ChangeSysState(9);
        var_r0 = 0;
    }
    return var_r0;
}
