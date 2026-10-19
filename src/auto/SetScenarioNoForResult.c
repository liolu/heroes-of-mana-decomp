/* compiler: 1.2/sp2p3 -profile */
#include "m2c.h"

extern void *data_0203673c;
extern M2C_UNK data_ov003_020ac984;

void SetScenarioNoForResult(M2C_UNK arg0) {
    void *temp_r2;

    temp_r2                         = M2C_FIELD(data_0203673c, void **, 0x30);
    M2C_FIELD(temp_r2, s32 *, 0x10) = (s32) ((M2C_FIELD(temp_r2, s32 *, 0x10) & ~0x3FC00000) | ((u32) (arg0 << 0x18) >> 2));
}
