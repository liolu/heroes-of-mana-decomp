/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_ov110_020e3cc0;

void VX_Free(void *arg0) {

    if (arg0 != 0) {
        OS_FreeToHeap(0, -1, arg0);
    }
}
