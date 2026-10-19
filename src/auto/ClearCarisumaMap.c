/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, s32, M2C_UNK);      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a8d90;

void ClearCarisumaMap(void) {
    MIi_CpuClear16(0, M2C_FIELD(data_ov000_02051548, s32 *, 0x508), 0x1900);
    MIi_CpuClear16(0, M2C_FIELD(data_ov000_02051548, s32 *, 0x50C), 0x1900);
}
