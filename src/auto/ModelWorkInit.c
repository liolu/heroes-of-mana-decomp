/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a6260;

void ModelWorkInit(void) {
    M2C_FIELD(data_ov000_02051548, s16 *, 0x2D6) = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x2CC) = 0;
    M2C_FIELD(data_ov000_02051548, s16 *, 0x2D4) = 0;
}
