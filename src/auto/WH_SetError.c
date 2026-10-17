/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020ae15c;
extern M2C_UNK data_ov003_020b6440;

void WH_SetError(void *arg0) {

    if ((u32) (M2C_FIELD(&data_ov003_020b6440, s32 *, 0x10) - 9) > 1U) {
        M2C_FIELD(&data_ov003_020b6440, s32 *, 0x20) = arg0;
    }
}
