#include "m2c.h"

extern M2C_UNK SDK_AUTOLOAD_DTCM_START;

void VBlankIntr(void) {
    M2C_FIELD(&SDK_AUTOLOAD_DTCM_START, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&SDK_AUTOLOAD_DTCM_START, s32 *, 0x3FF8) | 1);
}
