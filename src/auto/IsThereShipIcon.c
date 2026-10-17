/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 IsThereIconByComno(s32, s32);                  /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ab23c;

s32 IsThereShipIcon(void) {
    M2C_UNK var_r0;

    if (IsThereIconByComno(M2C_FIELD(data_ov000_02051548, s32 *, 0x78C), 0xFFB3) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
