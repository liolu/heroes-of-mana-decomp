/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK Routine_FadeOutAll();                      /* extern */
M2C_UNK SetScenarioNoForResult(s32);                   /* extern */
M2C_UNK PutBtlResultForFree();                      /* extern */
M2C_UNK MTG_BGM_FadeOutAndChange(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020ad494;

void MTG_FreeBattleEnd2(void *arg0) {

    Routine_FadeOutAll();
    MTG_BGM_FadeOutAndChange(0x25);
    SetScenarioNoForResult(arg0);
    PutBtlResultForFree();
}
