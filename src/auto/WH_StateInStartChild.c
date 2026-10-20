/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_StartConnectEx(void *, void *, void *, M2C_UNK, s32); /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
extern M2C_UNK data_ov003_020ae5b0;
extern M2C_UNK data_ov003_020b6440;
extern M2C_UNK data_ov003_020b6520;
extern M2C_UNK data_ov003_020b7820;
extern M2C_UNK WH_StateOutStartChild;

s32 WH_StateInStartChild(void) {
    s32 state;
    u16 var_r0;

    state = M2C_FIELD(&data_ov003_020b6440, s32 *, 0x10);
    if (!((state != 4) && (state != 6) && (state != 5))) {
        if (M2C_FIELD(&data_ov003_020b6440, M2C_UNK (**)(M2C_UNK *), 0x18) != NULL) {
            M2C_FIELD(&data_ov003_020b6440, M2C_UNK (**)(M2C_UNK *), 0x18)(&data_ov003_020ae5b0);
        }
        return 1;
    } else {
        WH_ChangeSysState(3);
        var_r0 = M2C_FIELD(&data_ov003_020b6440, s32 *, 0x24) != 0;
        if (WM_StartConnectEx(&WH_StateOutStartChild, &data_ov003_020b6520, &data_ov003_020b7820, 1, (s32) var_r0) == 2) {
            return 1;
        }
        WH_SetError();
        return 0;
    }
}
