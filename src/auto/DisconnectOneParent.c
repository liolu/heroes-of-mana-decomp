/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020aab08;
extern M2C_UNK data_ov003_020b5380;

void DisconnectOneParent(void *arg0) {

    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) & ~1);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((M2C_FIELD(arg0, s32 *, 0x54) & ~0xE0000000) | 0x20000000);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) & 0x3FFFFF);
    M2C_FIELD(&data_ov003_020b5380, M2C_UNK(**)(void *), 0x178)(arg0 + 0x50);
}
