/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetUnitStatus(s32);
void ObjSet(s32, s32, s32, s32);

void MTG_CarisumaPosArrange(s32 *arg0, s32 *arg1) {
    s32 n;

    n = 0;
    if (GetUnitStatus(0) == 3) {
        ObjSet(0, 7, arg0[n], arg1[n]);
        n++;
    }
    if (GetUnitStatus(1) == 3) {
        ObjSet(1, 7, arg0[n], arg1[n]);
        n++;
    }
    if (GetUnitStatus(2) == 3) {
        ObjSet(2, 7, arg0[n], arg1[n]);
        n++;
    }
    if (GetUnitStatus(3) == 3) {
        ObjSet(3, 7, arg0[n], arg1[n]);
        n++;
    }
    if (GetUnitStatus(4) == 3) {
        ObjSet(4, 7, arg0[n], arg1[n]);
        n++;
    }
    if (GetUnitStatus(5) == 3) {
        ObjSet(5, 7, arg0[n], arg1[n]);
        n++;
    }
    if (GetUnitStatus(6) == 3) {
        ObjSet(6, 7, arg0[n], arg1[n]);
        n++;
    }
    if (GetUnitStatus(7) == 3) {
        ObjSet(7, 7, arg0[n], arg1[n]);
        n++;
    }
    if (GetUnitStatus(8) == 3) {
        ObjSet(8, 7, arg0[n], arg1[n]);
        n++;
    }
    if (GetUnitStatus(9) == 3) {
        ObjSet(9, 7, arg0[n], arg1[n]);
        n++;
    }
    if (GetUnitStatus(10) == 3) {
        ObjSet(10, 7, arg0[n], arg1[n]);
        n++;
    }
}
