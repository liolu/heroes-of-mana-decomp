/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020ae83c;
extern M2C_UNK data_ov003_020b6440;

void WH_SetUserGameInfo(void *arg0, void *arg1) {
    s32 temp_r1;

    temp_r1                                      = arg1;
    M2C_FIELD(&data_ov003_020b6440, s32 *, 0xA0) = arg0;
    M2C_FIELD(&data_ov003_020b6440, s16 *, 0xA4) = (s16) temp_r1;
}
