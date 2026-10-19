/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK CountingMapObj(u32, M2C_UNK);          /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac478;

void CountGaiaFind(void) {
    CountingMapObj((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C, 5);
}
