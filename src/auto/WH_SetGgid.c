/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020ae830;
extern M2C_UNK data_ov003_020b6440;

void WH_SetGgid(M2C_UNK arg0) {
    M2C_FIELD(&data_ov003_020b6440, s32 *, 0xA8) = arg0;
}
