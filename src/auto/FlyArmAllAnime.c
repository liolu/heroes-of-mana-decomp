/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK FlyArmOneAnime(s32);                   /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020ab6b4;

void FlyArmAllAnime(void) {
    FlyArmOneAnime(data_ov000_02051548 + 0x250);
}
