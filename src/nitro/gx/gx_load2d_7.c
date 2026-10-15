#include "engine.h"
#include "m2c.h"

void GX_SetBankForOBJExtPltt(M2C_UNK);
void MI_WaitDma(M2C_UNK);
extern s32 GXi_DmaId;
extern M2C_UNK sSubBGExtPltt;

void GX_EndLoadOBJExtPltt(void) {
    if (GXi_DmaId != -1) {
        MI_WaitDma(GXi_DmaId);
    }
    GX_SetBankForOBJExtPltt(M2C_FIELD(&sSubBGExtPltt, s32 *, 8));
    M2C_FIELD(&sSubBGExtPltt, s32 *, 8) = 0;
    M2C_FIELD(&sSubBGExtPltt, s32 *, 4) = 0;
}
