/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
s32 GetUnitStatus(s32);
void TG_setObjDirection_withRelay(s32, s32);
void WaitSyncCounter(s32);
void TG_setPartyDirection_withRelay(s32 dir) {
    s32 i;
    for (i = 0; i < 11; i++) {
        if (GetUnitStatus(i) == 3 || GetUnitStatus(i) == 2) {
            TG_setObjDirection_withRelay(i, dir);
            WaitSyncCounter(2);
        }
    }
}
