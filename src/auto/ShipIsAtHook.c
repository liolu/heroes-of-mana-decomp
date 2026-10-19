/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ShipIsAtHookByKuni(u32);                   /* extern */
extern M2C_UNK data_ov003_020a8e90;

void ShipIsAtHook(M2C_UNK arg0) {
    ShipIsAtHookByKuni((u32) (M2C_FIELD(arg0, s32 *, 8) << 5) >> 0x1C);
}
