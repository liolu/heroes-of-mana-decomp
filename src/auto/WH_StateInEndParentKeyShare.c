/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 func_0201ace4(M2C_UNK *);                       /* extern */
M2C_UNK WH_SetError();                      /* extern */
s32 WH_StateInEndParentMP();                          /* extern */
M2C_UNK WH_Reset();                      /* extern */
extern M2C_UNK data_ov003_020ae340;
extern M2C_UNK data_ov003_020ae360;
extern M2C_UNK data_ov003_020b6440;
extern M2C_UNK data_ov003_020b67e0;

s32 WH_StateInEndParentKeyShare(void) {
    M2C_UNK var_r0;

    if (func_0201ace4(&data_ov003_020b67e0) != 0) {
        WH_SetError();
        var_r0 = 0;
    } else if (WH_StateInEndParentMP() == 0) {
        if (M2C_FIELD(&data_ov003_020b6440, M2C_UNK(**)(M2C_UNK *), 0x18) != NULL) {
            M2C_FIELD(&data_ov003_020b6440, M2C_UNK(**)(M2C_UNK *), 0x18)(&data_ov003_020ae340);
        }
        WH_Reset();
        var_r0 = 0;
    } else {
        var_r0 = 1;
    }
    return var_r0;
}
