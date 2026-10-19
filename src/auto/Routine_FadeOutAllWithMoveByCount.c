/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK FadeOutScreenByCount(M2C_UNK, s32, M2C_UNK); /* extern */
extern M2C_UNK data_ov003_020ac118;

void Routine_FadeOutAllWithMoveByCount(M2C_UNK arg0) {
    FadeOutScreenByCount(3, arg0, 1);
}
