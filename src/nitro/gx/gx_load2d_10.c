#include "engine.h"
#include "m2c.h"

void GX_SetBankForSubBGExtPltt(M2C_UNK);
void MI_WaitDma(M2C_UNK);
extern s32 GXi_DmaId;
extern s32 sSubBGExtPltt;

void GXS_EndLoadBGExtPltt(void) {
    if (GXi_DmaId != -1) {
        MI_WaitDma(GXi_DmaId);
    }
    GX_SetBankForSubBGExtPltt(sSubBGExtPltt);
    sSubBGExtPltt = 0;
}
