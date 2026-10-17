/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK CancelTransTex2VramSub(s32, s32);              /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020a849c;

void CancelTransTex2Vram(s32 arg0) {
    CancelTransTex2VramSub(data_ov000_02051548 + 0x278, arg0);
}
