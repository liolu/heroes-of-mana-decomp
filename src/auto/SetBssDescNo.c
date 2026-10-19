/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020aab78;
extern M2C_UNK data_ov003_020b5380;

void SetBssDescNo(M2C_UNK arg0) {
    M2C_FIELD(&data_ov003_020b5380, s32 *, 0x174) =
        (s32) ((M2C_FIELD(&data_ov003_020b5380, s32 *, 0x174) & ~0x1F) | (arg0 & 0x1F));
}
