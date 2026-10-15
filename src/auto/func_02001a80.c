#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, void *, s32);
extern void *data_0203673c;

void func_02001a80(void) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;

    MIi_CpuClear16(0, M2C_FIELD(data_0203673c, void **, 0x2C), 0x113C);
    temp_r0                             = M2C_FIELD(data_0203673c, void **, 0x2C);
    M2C_FIELD(temp_r0, s32 *, 0x108C)   = (s32) ((M2C_FIELD(temp_r0, s32 *, 0x108C) & ~7) | 2);
    temp_r0_2                           = M2C_FIELD(data_0203673c, void **, 0x2C);
    M2C_FIELD(temp_r0_2, s32 *, 0x108C) = (s32) ((M2C_FIELD(temp_r0_2, s32 *, 0x108C) & ~0x38) | 0x20);
    temp_r0_3                           = M2C_FIELD(data_0203673c, void **, 0x2C);
    M2C_FIELD(temp_r0_3, s32 *, 0x108C) = (s32) ((M2C_FIELD(temp_r0_3, s32 *, 0x108C) & ~0x1C0) | 0x100);
    temp_r0_4                           = M2C_FIELD(data_0203673c, void **, 0x2C);
    M2C_FIELD(temp_r0_4, s32 *, 0x108C) = (s32) ((M2C_FIELD(temp_r0_4, s32 *, 0x108C) & ~0x1E00) | 0x200);
}
