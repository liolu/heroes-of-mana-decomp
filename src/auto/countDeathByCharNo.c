/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a9500;

void countDeathByCharNo(M2C_UNK arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x1E) == M2C_FIELD(data_ov000_02051548, u16 *, 0xC2)) {
        M2C_FIELD(data_ov000_02051548, u16 *, 0xC4) = (u16) (M2C_FIELD(data_ov000_02051548, u16 *, 0xC4) + 1);
    }
}
