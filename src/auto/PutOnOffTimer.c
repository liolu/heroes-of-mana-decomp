/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aca64;

void PutOnOffTimer(M2C_UNK arg0) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD8) =
        (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD8) & ~0x200000) | ((u32) (arg0 << 0x1F) >> 0xA));
}
