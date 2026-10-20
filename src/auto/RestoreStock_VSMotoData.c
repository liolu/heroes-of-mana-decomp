/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, s32, s32);          /* extern */
M2C_UNK MIi_CpuCopy16(s32, s32, s32);               /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

void RestoreStock_VSMotoData(void) {
    u32 temp_r3;

    MIi_CpuClear16(0, M2C_FIELD(data_0203673c, s32 *, 0x28), 0xB40);
    MIi_CpuClear16(0, M2C_FIELD(data_0203673c, s32 *, 0x24), 0x11E0);
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x764) != 0) {
        MIi_CpuCopy16(M2C_FIELD(data_ov000_02051548, s32 *, 0x764), M2C_FIELD(data_0203673c, s32 *, 0x28), 0x2D0);
    }
    temp_r3 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x76C) << 24) >> 24;
    if (temp_r3 != 0) {
        MIi_CpuCopy16(M2C_FIELD(data_ov000_02051548, s32 *, 0x768), M2C_FIELD(data_0203673c, s32 *, 0x24), temp_r3 * 0x34);
    }
}
