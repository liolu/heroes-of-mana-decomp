/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020ae860;
extern M2C_UNK data_ov003_020b6440;

s32 WH_GetBitmap(void) {
    return M2C_FIELD(&data_ov003_020b6440, u16 *, 6);
}
