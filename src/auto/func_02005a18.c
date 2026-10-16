/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK DisposeCallback(s32, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK SND_DestroyWaveArc(s32);                    /* extern */
M2C_UNK SND_InvalidateWaveData(s32, s32);           /* extern */

void func_02005a18(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    DisposeCallback(arg0, arg2, arg3);
    SND_InvalidateWaveData(arg0, arg0 + arg1);
    SND_DestroyWaveArc(arg0);
}
