/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK func_0200fddc();                            /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020ae964;

void WH_IndicateHandler(M2C_UNK arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) == 8) {
        WH_ChangeSysState(9);
        func_0200fddc();
    }
}
