/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac9e0;

void MoveOnClearTimer(void) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) | 0x1000);
}
