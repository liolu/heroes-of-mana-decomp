/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_SetWEPKey(M2C_UNK *, s32, M2C_UNK *);        /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
extern M2C_UNK data_ov003_020ae1a0;
extern M2C_UNK data_ov003_020b6440;
extern M2C_UNK data_ov003_020b64a0;
extern M2C_UNK data_ov003_020b64e0;
extern M2C_UNK WH_StateOutSetParentWEPKey;

s32 WH_StateInSetParentWEPKey(void) {
    M2C_UNK var_r0;

    WH_ChangeSysState(3);
    if (WM_SetWEPKey(
            &WH_StateOutSetParentWEPKey,
            M2C_FIELD(&data_ov003_020b6440, s32(**)(M2C_UNK *, M2C_UNK *), 0x1C)(&data_ov003_020b64a0, &data_ov003_020b64e0),
            &data_ov003_020b64a0) == 2) {
        var_r0 = 1;
    } else {
        WH_SetError();
        WH_ChangeSysState(9);
        var_r0 = 0;
    }
    return var_r0;
}
