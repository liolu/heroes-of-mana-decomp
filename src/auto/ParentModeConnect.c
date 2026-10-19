/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WH_ParentConnect(M2C_UNK, u16, u16);     /* extern */
extern M2C_UNK data_ov003_020aa8a8;
extern M2C_UNK data_ov003_020b54e8;

void ParentModeConnect(void) {
    WH_ParentConnect(0, (u16) M2C_FIELD(&data_ov003_020b54e8, s32 *, 4),
                     (u16) ((u32) (M2C_FIELD(&data_ov003_020b54e8, s32 *, 8) << 0x1B) >> 0x1B));
}
