/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WH_ChildConnect(M2C_UNK, s32);          /* extern */
extern M2C_UNK data_ov003_020aa8bc;
extern M2C_UNK data_ov003_020b54e8;
extern M2C_UNK data_ov003_020b552c;

void ModeConnect(void) {
    WH_ChildConnect(1, (((u32) (M2C_FIELD(&data_ov003_020b54e8, s32 *, 0xC) << 0x1B) >> 0x1B) * 0xC0) +
                           (s32) &data_ov003_020b552c);
}
