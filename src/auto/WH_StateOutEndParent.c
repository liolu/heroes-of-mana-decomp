/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
extern M2C_UNK data_ov003_020ae3dc;

void WH_StateOutEndParent(M2C_UNK arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        WH_SetError();
    } else {
        WH_ChangeSysState(1);
    }
}
