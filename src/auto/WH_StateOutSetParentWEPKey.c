/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
s32 WH_StateInStartParent();                          /* extern */
extern M2C_UNK data_ov003_020ae1bc;

void WH_StateOutSetParentWEPKey(M2C_UNK arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        WH_SetError();
        WH_ChangeSysState(9);
    } else if (WH_StateInStartParent() == 0) {
        WH_ChangeSysState(9);
    }
}
