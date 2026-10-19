/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
s32 WH_StateInStartChild();                          /* extern */
extern M2C_UNK data_ov003_020ae564;
extern M2C_UNK data_ov003_020ae594;
extern M2C_UNK data_ov003_020b6440;

void WH_StateOutSetChildWEPKey(M2C_UNK arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        WH_SetError();
        WH_ChangeSysState(9);
    } else if (WH_StateInStartChild() == 0) {
        if (M2C_FIELD(&data_ov003_020b6440, M2C_UNK(**)(M2C_UNK *), 0x18) != NULL) {
            M2C_FIELD(&data_ov003_020b6440, M2C_UNK(**)(M2C_UNK *), 0x18)(&data_ov003_020ae564);
        }
        WH_ChangeSysState(9);
    }
}
