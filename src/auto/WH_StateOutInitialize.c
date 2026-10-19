/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_SetIndCallback(M2C_UNK *);                   /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
extern M2C_UNK data_ov003_020ae990;
extern M2C_UNK WH_IndicateHandler;

void WH_StateOutInitialize(M2C_UNK arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        WH_SetError();
        WH_ChangeSysState(0xA);
    } else if (WM_SetIndCallback(&WH_IndicateHandler) != 0) {
        WH_SetError();
        WH_ChangeSysState(0xA);
    } else {
        WH_ChangeSysState(1);
    }
}
