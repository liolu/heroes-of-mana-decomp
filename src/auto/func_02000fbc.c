#include "m2c.h"

s32 OS_GetArenaHi(M2C_UNK);
s32 OS_GetArenaLo(M2C_UNK);
M2C_UNK OS_SetArenaLo(M2C_UNK, s32);
s32 func_0200ebe0(M2C_UNK, s32, M2C_UNK);
M2C_UNK OS_SetCurrentHeap(M2C_UNK, s32);
s32 func_0200eed8(M2C_UNK, s32, s32, M2C_UNK);
s32 func_0200ef80(M2C_UNK, s32, s32);
M2C_UNK func_0200fddc();
extern s32 data_02036724;

void func_02000fbc(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;

    temp_r4 = OS_GetArenaHi(0);
    OS_SetArenaLo(0, func_0200eed8(0, OS_GetArenaLo(0), temp_r4, 1));
    temp_r4_2     = OS_GetArenaLo(0);
    temp_r4_3     = (OS_GetArenaHi(0) - temp_r4_2) - 0x10000;
    temp_r0       = func_0200ebe0(0, temp_r4_3, 4);
    temp_r0_2     = func_0200ef80(0, temp_r0, temp_r0 + temp_r4_3);
    data_02036724 = temp_r0_2;
    if (temp_r0_2 < 0) {
        func_0200fddc();
    }
    OS_SetCurrentHeap(0, data_02036724);
}
