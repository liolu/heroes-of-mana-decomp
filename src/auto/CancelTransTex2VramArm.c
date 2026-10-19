/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK CancelTransTex2VramSubArm(s32, s32);              /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020ab6ec;

void CancelTransTex2VramArm(M2C_UNK arg0) {
    CancelTransTex2VramSubArm(data_ov000_02051548 + 0x278, arg0);
}
