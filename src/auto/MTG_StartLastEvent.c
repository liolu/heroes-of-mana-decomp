/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK Routine_FadeOutAll();                      /* extern */
M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK StopMovingGame();                      /* extern */
M2C_UNK ObjSet(s32, M2C_UNK, s32, s32); /* extern */
M2C_UNK Routine_DownLCD_Is3DMap();                      /* extern */
M2C_UNK KuniNameSet(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK Routine_SetEvPosMode(M2C_UNK);               /* extern */
M2C_UNK cameraTargetIconOFF();                      /* extern */
M2C_UNK CancelPutShipInner();                      /* extern */
M2C_UNK WaitShipInnerToBtlField();                      /* extern */
M2C_UNK HpBar_Status_IconOFF();                      /* extern */
M2C_UNK SetScenarioNoForResult(s32);                   /* extern */
M2C_UNK PutBtlResult();                      /* extern */
M2C_UNK StopClearTimer();                      /* extern */
M2C_UNK StopPlanTimer();                      /* extern */
M2C_UNK SetResultMapReferenceRate();                      /* extern */
M2C_UNK Put__MISSION_COMPLETE();                      /* extern */
M2C_UNK delete__MISSION_COMPLETE();                      /* extern */
M2C_UNK PutOnePlanePicUP_LCD(M2C_UNK);               /* extern */
s32 GetGameLevelMode();                          /* extern */
M2C_UNK SetFreeScenarioOnOff(s32, M2C_UNK);          /* extern */
M2C_UNK MTG_BGM_FadeOutAndChange(M2C_UNK);               /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ad428;

void MTG_StartLastEvent(void *arg0, s32 arg5) {
    s32 var_r6;

    StopMovingGame();
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
    Routine_FadeOutAll();
    M2C_FIELD(data_ov000_02051548, s32 *, 0x90) = arg0;
    SetFreeScenarioOnOff(arg0 - 2, 1);
    if (GetGameLevelMode() == 0) {
        SetScenarioNoForResult(arg0);
    } else {
        SetScenarioNoForResult(arg0 + 0x64);
    }
    MTG_BGM_FadeOutAndChange(0x25);
    PutBtlResult();
    PutOnePlanePicUP_LCD(0);
    var_r6 = 0;
    do {
        ObjSet(var_r6, 0x27, 0, 0);
        var_r6 += 1;
    } while (var_r6 < 0x39);
}
