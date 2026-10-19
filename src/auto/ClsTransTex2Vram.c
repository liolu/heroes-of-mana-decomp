/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ClsTransTex2VramSub(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a8504;

void ClsTransTex2Vram(void) {
    ClsTransTex2VramSub(M2C_FIELD(data_ov000_02051548, s32 *, 0x278));
    M2C_FIELD(data_ov000_02051548, s32 *, 0x278) = 0;
}
