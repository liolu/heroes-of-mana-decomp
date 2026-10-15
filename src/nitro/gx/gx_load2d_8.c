#include "m2c.h"

s32 GX_ResetBankForSubBGExtPltt();

extern s32 sSubBGExtPltt;

void GXS_BeginLoadBGExtPltt(void) {
    sSubBGExtPltt = GX_ResetBankForSubBGExtPltt();
}
