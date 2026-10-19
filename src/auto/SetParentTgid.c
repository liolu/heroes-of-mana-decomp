/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 WM_GetNextTgid(s32);                            /* extern */
extern M2C_UNK data_ov003_020aaa58;
extern M2C_UNK data_ov003_020b5380;

void SetParentTgid(M2C_UNK arg0) {
    M2C_FIELD(&data_ov003_020b5380, s32 *, 0x16C) = WM_GetNextTgid(arg0);
}
