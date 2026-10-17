/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK QuadArrow(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov003_020a9c5c;

void putBoxArrow(void) {
    *(s32 *) 0x04000500 = 1;
    QuadArrow(7, 0, 2, 9);
    QuadArrow(9, 2, 1, 8);
    QuadArrow(8, 1, 0, 7);
    QuadArrow(0, 1, 2, 0);
    QuadArrow(7, 9, 8, 7);
    *(s32 *) 0x04000504 = 0;
}
