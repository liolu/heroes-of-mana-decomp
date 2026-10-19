/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK PutOrderingDelete(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a81a4;

void PutOrderingInitialize(void) {
    PutOrderingDelete(M2C_FIELD(data_ov000_02051548, s32 *, 0x4AC));
    M2C_FIELD(data_ov000_02051548, s32 *, 0x4AC) = 0;
}
