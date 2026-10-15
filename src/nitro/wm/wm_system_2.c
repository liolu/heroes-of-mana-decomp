#include "m2c.h"

extern M2C_UNK wmInitialized;
s32 func_0200e3ec(M2C_UNK *, u16 **, M2C_UNK);

M2C_UNK func_0200e490(M2C_UNK *, u16 *, M2C_UNK);

M2C_UNK DC_InvalidateRange(u16 *, M2C_UNK);

extern M2C_UNK bufMsgQ;

void WMi_SetCallbackTable(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(&wmInitialized, s32 *, 4) + (arg0 * 4)), s32 *, 0x18) = arg1;
}

u16 *WmGetCommandBuffer4Arm7(void) {
    u16 *sp0;

    if (func_0200e3ec(&bufMsgQ, &sp0, 0) == 0) {
        return NULL;
    }
    DC_InvalidateRange(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_0200e490(&bufMsgQ, sp0, 1);
    return NULL;
}
