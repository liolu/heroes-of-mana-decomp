/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK QuadAddSub(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_ov003_020a9de4;

void putBoxShadowAddSub(void *arg0) {

    *(s32 *) 0x04000500 = 1;
    QuadAddSub(2, 0, 4, 6, arg0);
    QuadAddSub(7, 5, 1, 3, arg0);
    QuadAddSub(6, 4, 5, 7, arg0);
    QuadAddSub(3, 1, 0, 2, arg0);
    QuadAddSub(5, 4, 0, 1, arg0);
    QuadAddSub(6, 7, 3, 2, arg0);
    *(s32 *) 0x04000504 = 0;
}
