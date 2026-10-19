/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuClear16(s32, s32, M2C_UNK);          /* extern */
extern M2C_UNK data_ov003_020a9134;

void convertPlane1bitToFULL(M2C_UNK arg0) {
    MIi_CpuClear16(0xFFFF, arg0, 0xC00);
}
