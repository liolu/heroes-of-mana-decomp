/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_Disconnect(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
M2C_UNK WH_Reset();                      /* extern */
extern M2C_UNK data_ov003_020ae76c;
extern M2C_UNK WH_StateOutEndChild;

s32 WH_StateInEndChild(void) {
    M2C_UNK var_r0;

    WH_ChangeSysState(3);
    if (WM_Disconnect(&WH_StateOutEndChild, 0) == 2) {
        var_r0 = 1;
    } else {
        WH_SetError();
        WH_Reset();
        var_r0 = 0;
    }
    return var_r0;
}
