/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_End(M2C_UNK *);                              /* extern */
M2C_UNK func_0200fddc();                            /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020aea68;
extern M2C_UNK data_ov003_020b6440;
extern M2C_UNK WH_StateOutEnd;

s32 WH_End(void) {
    M2C_UNK var_r0;

    if (M2C_FIELD(&data_ov003_020b6440, s32 *, 0x10) != 1) {
        func_0200fddc();
    }
    WH_ChangeSysState(3);
    if (WM_End(&WH_StateOutEnd) == 2) {
        var_r0 = 1;
    } else {
        WH_ChangeSysState(9);
        var_r0 = 0;
    }
    return var_r0;
}
