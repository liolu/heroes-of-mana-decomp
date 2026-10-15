#include "engine.h"
#include "m2c.h"

void GX_SetBankForTex(M2C_UNK);
void MI_WaitDma(M2C_UNK);
extern s32 GXi_DmaId;
extern M2C_UNK sClrImg;

s32 GX_EndLoadTex(void) {
    if (GXi_DmaId != -1) {
        MI_WaitDma(GXi_DmaId);
    }
    GX_SetBankForTex(M2C_FIELD(&sClrImg, s32 *, 0x14));
    M2C_FIELD(&sClrImg, s32 *, 0x1C) = 0;
    M2C_FIELD(&sClrImg, s32 *, 0x18) = 0;
    M2C_FIELD(&sClrImg, s32 *, 4)    = 0;
    M2C_FIELD(&sClrImg, s32 *, 0x14) = 0;
    return (s32) &sClrImg;
}
