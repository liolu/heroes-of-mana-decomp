/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK RestoreCameraPositon(M2C_UNK);               /* extern */
M2C_UNK WaitSyncCamera();                      /* extern */
M2C_UNK MovingGameGo();                      /* extern */
M2C_UNK cameraTargetIconON(s32);                   /* extern */
M2C_UNK HpBar_Status_IconON();                      /* extern */
M2C_UNK MoveOnClearTimer();                      /* extern */
extern M2C_UNK data_ov003_020ad43c;

void MTG_EndEvent(M2C_UNK arg0) {
    cameraTargetIconON(arg0);
    HpBar_Status_IconON();
    RestoreCameraPositon(0x3C);
    WaitSyncCamera();
    WaitSyncCounter(0x1E);
    MoveOnClearTimer();
    MovingGameGo();
}
