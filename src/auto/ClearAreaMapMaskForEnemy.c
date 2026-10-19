/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, s32, M2C_UNK);      /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020aa384;

void ClearAreaMapMaskForEnemy(void) {
    MIi_CpuClear16(0, data_ov000_02051548 + 0x540, 0x140);
}
