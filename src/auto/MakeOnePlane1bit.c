/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, s32, M2C_UNK);      /* extern */
s32 func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_ov003_020a9120;

s32 MakeOnePlane1bit(void) {
    s32 temp_r0;

    temp_r0 = func_0200ed38(0, -1, 0x1800);
    MIi_CpuClear16(0, temp_r0, 0x1800);
    return temp_r0;
}
