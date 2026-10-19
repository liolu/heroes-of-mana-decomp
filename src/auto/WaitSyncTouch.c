/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WaitSyncTouchXY(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK data_ov003_020ac1d8;

void WaitSyncTouch(void) {
    WaitSyncTouchXY(0x80, 0x60);
}
