/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern s32 *Get_aONEOBJadrsByCharno(s32);
s32 GetDireOfUnit(s32 c) {
    s32 *p = Get_aONEOBJadrsByCharno(c);
    s32 r;
    if (p != 0) {
        r = (u32) (*p << 21) >> 29;
    } else {
        r = -1;
    }
    return r;
}
