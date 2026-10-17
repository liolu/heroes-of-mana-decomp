/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ModelWorkReleaseAllSub(void *);                /* extern */
M2C_UNK ModelTypeReleaseAllSub(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a9eb0;

void ModelWorkReleaseAll(void) {
    ModelWorkReleaseAllSub(data_ov000_02051548 + 0x2CC);
    ModelTypeReleaseAllSub(M2C_FIELD(data_ov000_02051548, s32 *, 0x2D0));
    M2C_FIELD(data_ov000_02051548, s32 *, 0x2D0) = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x2CC) = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x290) = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x298) = 0;
}
