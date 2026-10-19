/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a7ba0;
extern M2C_UNK data_ov003_020acea0;

void SetDeathCheckForVS(M2C_UNK arg0) {
    M2C_FIELD(&data_ov003_020a7ba0, s32 *, 8)   = arg0;
    M2C_FIELD(data_ov000_02051548, s16 *, 0xC0) = 2;
}
