/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK FadeOutScreenByCount(s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov003_020a7910;

void FadeOutScreen(M2C_UNK arg0) {
    FadeOutScreenByCount(arg0, 0x20, 0);
}
