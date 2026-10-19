/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
s32 WH_StateInSetParentWEPKey();                          /* extern */
s32 WH_StateInStartParent();                          /* extern */
extern M2C_UNK data_ov003_020ae184;
extern M2C_UNK data_ov003_020b6440;

void WH_StateOutSetParentParam(M2C_UNK arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        WH_SetError();
        WH_ChangeSysState(9);
    } else if (M2C_FIELD(&data_ov003_020b6440, s32 *, 0x1C) != 0) {
        if (WH_StateInSetParentWEPKey() == 0) {
            WH_ChangeSysState(9);
        }
    } else if (WH_StateInStartParent() == 0) {
        WH_ChangeSysState(9);
    }
}
