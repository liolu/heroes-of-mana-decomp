/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 func_0201a380(M2C_UNK *);                       /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
s32 WH_StateInReset();                          /* extern */
extern M2C_UNK data_ov003_020aea18;
extern M2C_UNK data_ov003_020b6440;
extern M2C_UNK data_ov003_020b7000;

void WH_Reset(void) {
    if ((M2C_FIELD(&data_ov003_020b6440, s32 *, 0x10) == 5) && (func_0201a380(&data_ov003_020b7000) != 0)) {
        WH_SetError();
    }
    if (WH_StateInReset() == 0) {
        WH_ChangeSysState(0xA);
    }
}
