/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ReleaseKaoGraCommonSub(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ab3b8;

void ReleaseKaoGraCommon(void) {
    ReleaseKaoGraCommonSub(M2C_FIELD(data_ov000_02051548, s32 *, 0x4D4));
    M2C_FIELD(data_ov000_02051548, s32 *, 0x4D4) = 0;
}
