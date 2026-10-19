/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK Put_MissionStartCompleteWinLose(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020acae0;

void Put__MISSION_COMPLETE(void) {
    Put_MissionStartCompleteWinLose(2);
}
