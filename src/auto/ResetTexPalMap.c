/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, s32, M2C_UNK);      /* extern */
extern s32 data_ov000_0205154c;
extern M2C_UNK data_ov003_020a7a10;

void ResetTexPalMap(void) {
    MIi_CpuClear16(0, data_ov000_0205154c + 0xAB4, 0x40);
}
