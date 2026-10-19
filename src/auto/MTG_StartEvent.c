/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK StockCameraPositon();                      /* extern */
M2C_UNK WaitSyncCamera();                      /* extern */
M2C_UNK StopMovingGame(s32);                   /* extern */
M2C_UNK ObjSet(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_DownLCD_Is3DMap();                      /* extern */
M2C_UNK cameraTargetIconOFF();                      /* extern */
M2C_UNK CancelPutShipInner();                      /* extern */
M2C_UNK WaitShipInnerToBtlField();                      /* extern */
M2C_UNK HpBar_Status_IconOFF();                      /* extern */
M2C_UNK StopClearTimer();                      /* extern */
M2C_UNK StopPlanTimer();                      /* extern */
extern M2C_UNK data_ov003_020ad418;

void MTG_StartEvent(M2C_UNK arg0) {
    StopMovingGame(arg0);
    CancelPutShipInner();
    WaitShipInnerToBtlField();
    WaitSyncCamera();
    StockCameraPositon();
    ObjSet(0, 5, 0, 0);
    StopClearTimer();
    StopPlanTimer();
    Routine_DownLCD_Is3DMap();
    HpBar_Status_IconOFF();
    cameraTargetIconOFF();
}
