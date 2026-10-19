/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_StartKeySharing(M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
extern M2C_UNK data_ov003_020ae320;
extern M2C_UNK data_ov003_020b67e0;

s32 WH_StateInStartParentKeyShare(void) {
    M2C_UNK var_r0;

    WH_ChangeSysState(6);
    if (WM_StartKeySharing(&data_ov003_020b67e0, 0xD) == 0) {
        var_r0 = 1;
    } else {
        WH_SetError();
        var_r0 = 0;
    }
    return var_r0;
}
