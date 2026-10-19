/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetChannelMain(s32);                       /* extern */
extern M2C_UNK data_ov003_020aaa68;
extern M2C_UNK data_ov003_020b5380;

void SetParentChannel(M2C_UNK arg0) {
    M2C_FIELD(&data_ov003_020b5380, s32 *, 0x170) =
        (s32) ((M2C_FIELD(&data_ov003_020b5380, s32 *, 0x170) & ~0x1F) | (GetChannelMain(arg0) & 0x1F));
}
