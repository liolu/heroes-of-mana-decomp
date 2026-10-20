/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WaitSyncTouchXY(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK MovingGameGo();                      /* extern */
M2C_UNK cameraTargetIconON();                      /* extern */
M2C_UNK HpBar_Status_IconON();                      /* extern */
M2C_UNK MoveOnClearTimer();                      /* extern */
M2C_UNK Put__MISSION_START();                      /* extern */
M2C_UNK delete__MISSION_START();                      /* extern */
M2C_UNK SetHaibokuJouken(s32);                   /* extern */
M2C_UNK SetSyouriJouken(s32);                   /* extern */
M2C_UNK PutHaibokuJouken();                      /* extern */
M2C_UNK PutSyouriJouken();                      /* extern */
M2C_UNK delete_SyouriHaibokuJouken();                      /* extern */
M2C_UNK SetBright3DScreen(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov003_020ad254;

void TG_BattleRestart(void *arg0, void *arg1, s32 arg4) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = arg0;
    temp_r4 = arg1;
    SetBright3DScreen(0, -8, 0x14);
    WaitSyncCounter(0x14);
    SetSyouriJouken(temp_r5);
    PutSyouriJouken();
    WaitSyncTouchXY(0xF0, 0xB9);
    delete_SyouriHaibokuJouken();
    SetBright3DScreen(-8, 0, 0x14);
    WaitSyncCounter(0x32);
    SetBright3DScreen(0, -8, 0x14);
    WaitSyncCounter(0x14);
    SetHaibokuJouken(temp_r4);
    PutHaibokuJouken();
    WaitSyncTouchXY(0xF0, 0xB9);
    delete_SyouriHaibokuJouken();
    SetBright3DScreen(-8, 0, 0x14);
    WaitSyncCounter(0x32);
    Put__MISSION_START();
    WaitSyncCounter(0x5A);
    delete__MISSION_START();
    HpBar_Status_IconON();
    cameraTargetIconON();
    MovingGameGo();
    MoveOnClearTimer();
}
