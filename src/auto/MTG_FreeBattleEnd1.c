/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK StopMovingGame(s32);                   /* extern */
M2C_UNK ObjSet(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_DownLCD_Is3DMap();                      /* extern */
M2C_UNK KuniNameSet(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK Routine_SetEvPosMode(M2C_UNK);               /* extern */
M2C_UNK cameraTargetIconOFF();                      /* extern */
M2C_UNK CancelPutShipInner();                      /* extern */
M2C_UNK WaitShipInnerToBtlField();                      /* extern */
M2C_UNK HpBar_Status_IconOFF();                      /* extern */
M2C_UNK StopClearTimer();                      /* extern */
M2C_UNK StopPlanTimer();                      /* extern */
M2C_UNK SetResultMapReferenceRate();                      /* extern */
M2C_UNK Put__MISSION_COMPLETE();                      /* extern */
M2C_UNK delete__MISSION_COMPLETE();                      /* extern */
M2C_UNK MTG_BGM_FadeOutAndChange(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020ad480;

void MTG_FreeBattleEnd1(M2C_UNK arg0) {
    StopMovingGame(arg0);
    CancelPutShipInner();
    WaitShipInnerToBtlField();
    ObjSet(0, 5, 0, 0);
    StopClearTimer();
    StopPlanTimer();
    Routine_DownLCD_Is3DMap();
    cameraTargetIconOFF();
    HpBar_Status_IconOFF();
    KuniNameSet(1, 0);
    SetResultMapReferenceRate();
    Routine_SetEvPosMode(0);
    MTG_BGM_FadeOutAndChange(5);
    WaitSyncCounter(0x3C);
    Put__MISSION_COMPLETE();
    WaitSyncCounter(0x5A);
    delete__MISSION_COMPLETE();
}
