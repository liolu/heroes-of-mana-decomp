/* compiler: 1.2/sp3  */
#include "m2c.h"

s32 SND_GetWaveDataAddress(M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK SND_InvalidateWaveData(s32, s32);           /* extern */
M2C_UNK SND_SetWaveDataAddress(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_020059a8(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == SND_GetWaveDataAddress(arg2, arg3)) {
        SND_SetWaveDataAddress(arg2, arg3, 0);
    }
    SND_InvalidateWaveData(arg0, arg0 + arg1);
}
