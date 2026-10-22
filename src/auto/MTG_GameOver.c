/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK cameraTargetIconOFF();                      /* extern */
M2C_UNK Put__MISSION_GAMEOVER();                      /* extern */
M2C_UNK delete__MISSION_GAMEOVER();                      /* extern */
M2C_UNK WaitSyncSelectForGameOver();                      /* extern */
M2C_UNK GotoLoadData();                      /* extern */
M2C_UNK GotoTitleScreen();                      /* extern */
s32 GetNumberChoicePos();                          /* extern */
M2C_UNK Goto_EventNoAndTitleNo(s32, s32);              /* extern */
M2C_UNK SetBright3DScreen(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK MTG_BGM_FadeOutAndChange(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020ad45c;

void MTG_GameOver(void *arg0, void *arg1, s32 arg4) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = arg0;
    temp_r4 = arg1;
    cameraTargetIconOFF();
    MTG_BGM_FadeOutAndChange(6);
    WaitSyncCounter(0x1E);
    SetBright3DScreen(0, -8, 0x14);
    WaitSyncCounter(0x14);
    Put__MISSION_GAMEOVER();
    WaitSyncSelectForGameOver();
    temp_r0 = GetNumberChoicePos();
    switch (temp_r0) {                              /* irregular */
        case 1:
            SetBright3DScreen(-8, 0, 0x14);
            WaitSyncCounter(0x14);
            delete__MISSION_GAMEOVER();
            Goto_EventNoAndTitleNo(temp_r5, temp_r4);
            break;
        case 2:
            SetBright3DScreen(-8, 0, 0x14);
            WaitSyncCounter(0x14);
            delete__MISSION_GAMEOVER();
            GotoLoadData();
            break;
        case 3:
            SetBright3DScreen(-8, 0, 0x14);
            WaitSyncCounter(0x14);
            delete__MISSION_GAMEOVER();
            GotoTitleScreen();
            break;
    }
}
