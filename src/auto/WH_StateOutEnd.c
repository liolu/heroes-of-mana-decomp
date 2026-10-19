/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020ae820;

void WH_StateOutEnd(M2C_UNK arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        WH_ChangeSysState(0xA);
    } else {
        WH_ChangeSysState(0);
    }
}
