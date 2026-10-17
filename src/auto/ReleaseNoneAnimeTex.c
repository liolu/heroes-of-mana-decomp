/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, void *);            /* extern */
extern M2C_UNK data_ov003_020a8cc8;

void ReleaseNoneAnimeTex(void *arg0) {

    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        OS_FreeToHeap(0, -1, M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}
