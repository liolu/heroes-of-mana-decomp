/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK FadeInScreenByCount(M2C_UNK, s32, M2C_UNK); /* extern */
extern M2C_UNK data_ov003_020ac13c;

void Routine_FadeInAllWithMoveByCount(M2C_UNK arg0) {
    FadeInScreenByCount(3, arg0, 1);
}
