#include "engine.h"
#include "m2c.h"

void GX_SetBankForBGExtPltt(M2C_UNK);
void MI_WaitDma(M2C_UNK);
extern s32 GXi_DmaId;
extern M2C_UNK sSubBGExtPltt;
s32 GX_ResetBankForOBJExtPltt();

void GX_EndLoadBGExtPltt(void) {
    if (GXi_DmaId != -1) {
        MI_WaitDma(GXi_DmaId);
    }
    GX_SetBankForBGExtPltt(M2C_FIELD(&sSubBGExtPltt, s32 *, 0x14));
    M2C_FIELD(&sSubBGExtPltt, s32 *, 0x14) = 0;
    M2C_FIELD(&sSubBGExtPltt, s32 *, 0x10) = 0;
    M2C_FIELD(&sSubBGExtPltt, s32 *, 0xC)  = 0;
}

void GX_BeginLoadOBJExtPltt(void) {
    s32 temp_r0;

    temp_r0                             = GX_ResetBankForOBJExtPltt();
    M2C_FIELD(&sSubBGExtPltt, s32 *, 8) = temp_r0;
    switch (temp_r0) {
        case 0x0:
            return;
        case 0x40:
            M2C_FIELD(&sSubBGExtPltt, s32 *, 4) = 0x06894000;
            return;
        case 0x20:
            M2C_FIELD(&sSubBGExtPltt, s32 *, 4) = 0x06890000;
            return;
    }
}
