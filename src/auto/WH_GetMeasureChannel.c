/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK func_0200fddc();                            /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
u16 SelectChannel(u16);                       /* extern */
extern M2C_UNK data_ov003_020ae914;
extern M2C_UNK data_ov003_020ae92c;
extern M2C_UNK data_ov003_020b6440;

s32 WH_GetMeasureChannel(void) {
    if (M2C_FIELD(&data_ov003_020b6440, s32 *, 0x10) != 7) {
        func_0200fddc();
    }
    WH_ChangeSysState(1);
    M2C_FIELD(&data_ov003_020b6440, u16 *, 8) = SelectChannel(M2C_FIELD(&data_ov003_020b6440, u16 *, 0));
    if (M2C_FIELD(&data_ov003_020b6440, M2C_UNK(**)(M2C_UNK *, u16), 0x18) != NULL) {
        M2C_FIELD(&data_ov003_020b6440, M2C_UNK(**)(M2C_UNK *, u16), 0x18)(&data_ov003_020ae914,
                                                                           M2C_FIELD(&data_ov003_020b6440, u16 *, 8));
    }
    return M2C_FIELD(&data_ov003_020b6440, u16 *, 8);
}
