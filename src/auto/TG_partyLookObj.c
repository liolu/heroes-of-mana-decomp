/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
s32 GetUnitStatus(s32);
void ObjSet(s32, s32, s32, s32);
void TG_partyLookObj(s32 obj) {
    s32 i;
    for (i = 0; i < 11; i++) {
        if (GetUnitStatus(i) == 3 || GetUnitStatus(i) == 2) {
            if (obj != i) {
                ObjSet(i, 3, obj | 0x8000, 0);
            }
        }
    }
}
