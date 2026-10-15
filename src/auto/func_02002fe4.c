#include "m2c.h"

u32 *func_02002e48(M2C_UNK, M2C_UNK, M2C_UNK *);
s32 func_0200ed38(M2C_UNK, M2C_UNK);
M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, u32 *);
M2C_UNK MI_UncompressLZ8(u32 *, s32);

s32 func_02002fe4(M2C_UNK arg0, M2C_UNK arg1, u32 *arg2) {
    M2C_UNK sp0;
    s32 temp_r0;
    u32 *temp_r0_2;

    temp_r0_2 = func_02002e48(arg0, arg1, &sp0);
    *arg2     = (u32) *temp_r0_2 >> 8;
    temp_r0   = func_0200ed38(0, -1);
    MI_UncompressLZ8(temp_r0_2, temp_r0);
    if (temp_r0_2 != NULL) {
        OS_FreeToHeap(0, -1, temp_r0_2);
    }
    return temp_r0;
}
