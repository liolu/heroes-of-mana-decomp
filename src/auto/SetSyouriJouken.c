/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020acc44;

void SetSyouriJouken(s32 arg0) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD8) =
        (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD8) & ~0x3FF) | (arg0 & (-0x400U >> 0x16)));
}
