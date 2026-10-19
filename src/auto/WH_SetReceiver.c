/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_SetPortCallback(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020ae9e8;
extern M2C_UNK data_ov003_020ae9fc;
extern M2C_UNK data_ov003_020b6440;
extern M2C_UNK WH_PortReceiveCallback;

void WH_SetReceiver(M2C_UNK arg0) {
    M2C_FIELD(&data_ov003_020b6440, s32 *, 0x3C) = arg0;
    if (WM_SetPortCallback(0xE, &WH_PortReceiveCallback, 0) != 0) {
        WH_ChangeSysState(9);
        if (M2C_FIELD(&data_ov003_020b6440, M2C_UNK(**)(M2C_UNK *), 0x18) != NULL) {
            M2C_FIELD(&data_ov003_020b6440, M2C_UNK(**)(M2C_UNK *), 0x18)(&data_ov003_020ae9e8);
        }
    }
}
