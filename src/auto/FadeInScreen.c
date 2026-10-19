/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK FadeInScreenByCount(s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov003_020a7968;

void FadeInScreen(M2C_UNK arg0) {
    FadeInScreenByCount(arg0, 0x20, 0);
}
