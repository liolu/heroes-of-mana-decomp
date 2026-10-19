/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ReleaseFlyArmOne(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ab7d4;

void ReleaseFlyArmWork(void) {
    ReleaseFlyArmOne(M2C_FIELD(data_ov000_02051548, s32 *, 0x250));
    M2C_FIELD(data_ov000_02051548, s32 *, 0x250) = 0;
}
