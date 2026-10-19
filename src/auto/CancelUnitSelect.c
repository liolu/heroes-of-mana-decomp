/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ResetUnitSelect(s32);                   /* extern */
extern M2C_UNK data_ov003_020accd8;

void CancelUnitSelect(M2C_UNK arg0) {
    ResetUnitSelect(arg0);
}
