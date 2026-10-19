/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ReleaseObjectGraCommonSub(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ab4b0;

void ReleaseObjectGraCommon(void) {
    ReleaseObjectGraCommonSub(M2C_FIELD(data_ov000_02051548, s32 *, 0x4D8));
    M2C_FIELD(data_ov000_02051548, s32 *, 0x4D8) = 0;
}
