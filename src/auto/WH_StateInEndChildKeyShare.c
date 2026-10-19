/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 func_0201ace4(M2C_UNK *);                       /* extern */
M2C_UNK WH_ChangeSysState(M2C_UNK);               /* extern */
M2C_UNK WH_SetError();                      /* extern */
s32 WH_StateInEndChildMP();                          /* extern */
extern M2C_UNK data_ov003_020ae720;
extern M2C_UNK data_ov003_020b6440;
extern M2C_UNK data_ov003_020b67e0;

s32 WH_StateInEndChildKeyShare(void) {
    M2C_UNK var_r0;

    if (M2C_FIELD(&data_ov003_020b6440, s32 *, 0x10) != 6) {
        var_r0 = 0;
    } else {
        WH_ChangeSysState(3);
        if (func_0201ace4(&data_ov003_020b67e0) != 0) {
            WH_SetError();
            var_r0 = 0;
        } else if (WH_StateInEndChildMP() == 0) {
            var_r0 = 0;
        } else {
            var_r0 = 1;
        }
    }
    return var_r0;
}
