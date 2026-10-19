/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK QuadArrow(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov003_020a9c68;

void putBoxArrowBox(void) {
    *(s32 *) 0x04000500 = 1;
    QuadArrow(0xD, 6, 5, 0xC);
    QuadArrow(0xC, 5, 4, 0xB);
    QuadArrow(0xB, 4, 3, 0xA);
    QuadArrow(0xA, 3, 6, 0xD);
    QuadArrow(6, 3, 4, 5);
    QuadArrow(0xD, 0xC, 0xB, 0xA);
    *(s32 *) 0x04000504 = 0;
}
