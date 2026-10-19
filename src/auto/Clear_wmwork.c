/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, M2C_UNK *, s32);    /* extern */
extern M2C_UNK data_ov003_020aa934;
extern M2C_UNK data_ov003_020b54e8;

void Clear_wmwork(void) {
    MIi_CpuClear16(0, &data_ov003_020b54e8, 0xF48);
}
