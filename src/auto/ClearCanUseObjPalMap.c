/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"

extern s32 data_ov000_0205154c;
extern M2C_UNK data_ov003_020a79c4;

void ClearCanUseObjPalMap(M2C_UNK arg0) {
    M2C_FIELD(((arg0 * 0x4B0) + data_ov000_0205154c), s16 *, 0x602) = 0;
}
