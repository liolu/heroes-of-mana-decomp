#include "m2c.h"

M2C_UNK func_0200109c(M2C_UNK);
M2C_UNK func_020011dc();
s32 func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK MIi_CpuClear16(M2C_UNK, s32, M2C_UNK);
extern s32 data_0203673c;

void func_0200105c(void) {
    s32 temp_r0;

    temp_r0       = func_0200ed38(0, -1, 0x34);
    data_0203673c = temp_r0;
    MIi_CpuClear16(0, temp_r0, 0x34);
    func_020011dc();
    func_0200109c(0);
}
