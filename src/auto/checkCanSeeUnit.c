/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 Get_aONEOBJadrsByCharno(s32);                       /* extern */
s32 checkCanSeeUnitByUser();                          /* extern */
extern M2C_UNK data_ov003_020ac668;

s32 checkCanSeeUnit(s32 arg0) {
    s32 var_r0;

    if (Get_aONEOBJadrsByCharno(arg0) == 0) {
        var_r0 = 0;
    } else {
        var_r0 = checkCanSeeUnitByUser();
    }
    return var_r0;
}
