/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_StartParent(M2C_UNK *);                      /* extern */
M2C_UNK WH_SetError();                      /* extern */
extern M2C_UNK data_ov003_020ae1d8;
extern M2C_UNK data_ov003_020b6440;
extern M2C_UNK WH_StateOutStartParent;

s32 WH_StateInStartParent(void) {
    M2C_UNK var_r0;

    if ((u32) (M2C_FIELD(&data_ov003_020b6440, s32 *, 0x10) - 4) <= 2U) {
        var_r0 = 1;
    } else if (WM_StartParent(&WH_StateOutStartParent) != 2) {
        WH_SetError();
        var_r0 = 0;
    } else {
        M2C_FIELD(&data_ov003_020b6440, s16 *, 0xA) = 0;
        var_r0                                      = 1;
        M2C_FIELD(&data_ov003_020b6440, s16 *, 6)   = 1;
    }
    return var_r0;
}
