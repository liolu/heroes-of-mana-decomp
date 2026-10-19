/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK Delete_MissionGameOver(s32);                   /* extern */
M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020acbb0;

void delete__MISSION_GAMEOVER(M2C_UNK arg0) {
    Delete_MissionGameOver(arg0);
    WaitSyncCounter(1);
}
