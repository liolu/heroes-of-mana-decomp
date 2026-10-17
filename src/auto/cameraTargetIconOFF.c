/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK deleteComObj(void *);                /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac898;

void cameraTargetIconOFF(void) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) | 0x400);
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x794) != 0) {
        deleteComObj(data_ov000_02051548 + 0x794);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x794) = 0;
    }
}
