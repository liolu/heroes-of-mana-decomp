/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK RestoreLoadGameData(s32, s32);              /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa5dc;

void StoreNowGameData(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(data_ov000_02051548, s32 *, 0x690);
    if (temp_r0 != 0) {
        RestoreLoadGameData(temp_r0, M2C_FIELD(data_ov000_02051548, s32 *, 0x694));
    }
}
