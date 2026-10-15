#include "engine.h"
#include "m2c.h"

void GX_SetBankForTexPltt(M2C_UNK);
void MI_WaitDma(M2C_UNK);
extern s32 GXi_DmaId;
extern M2C_UNK sClrImg;

void GX_EndLoadTexPltt(void) {
    if (GXi_DmaId != -1) {
        MI_WaitDma(GXi_DmaId);
    }
    GX_SetBankForTexPltt(M2C_FIELD(&sClrImg, s32 *, 0xC));
    M2C_FIELD(&sClrImg, s32 *, 0xC) = 0;
    M2C_FIELD(&sClrImg, s32 *, 8)   = 0;
}
