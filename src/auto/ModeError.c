/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WH_GetLastError();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aab9c;

void ModeError(void) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0x10) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0x10) & ~1) | 1);
    WH_GetLastError();
}
