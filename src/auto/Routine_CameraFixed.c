/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac4fc;

void Routine_CameraFixed(void) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0x14) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) | 0x2000);
}
