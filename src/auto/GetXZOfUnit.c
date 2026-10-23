/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *Get_aONEOBJadrsByCharno(s32 n);
s32 GetXZOfUnit(s32 n, s32 *x, s32 *z) {
    u8 *o = Get_aONEOBJadrsByCharno(n);
    if (o == 0) {
        return 0;
    }
    *x = (s8) o[0x60];
    *z = (s8) o[0x61];
    return 1;
}
