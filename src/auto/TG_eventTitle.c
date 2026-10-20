/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK Routine_FadeOutAll();                      /* extern */
M2C_UNK Routine_PutEventTitle(s32, M2C_UNK);          /* extern */
M2C_UNK MTG_BGM_FadeOutAndChange(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020ad244;

void TG_eventTitle(void *arg0) {

    Routine_FadeOutAll();
    MTG_BGM_FadeOutAndChange(0x2E);
    Routine_PutEventTitle(arg0, 0);
}
