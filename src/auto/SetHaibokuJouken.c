/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020acc30;

void SetHaibokuJouken(M2C_UNK arg0) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) =
        (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) & 0xE007FFFF) | ((u32) (arg0 << 0x16) >> 3));
}
