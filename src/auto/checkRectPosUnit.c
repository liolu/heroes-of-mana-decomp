/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x60];
    s8 x;
    s8 y;
} Obj;
extern Obj *Get_aONEOBJadrsByCharno(s32);
s32 checkRectPosUnit(s32 no, s32 x0, s32 y0, s32 x1, s32 y1) {
    Obj *o = Get_aONEOBJadrsByCharno(no);
    if (o != 0 && o->x >= x0 && o->x <= x1 && o->y >= y0 && o->y <= y1) {
        return 1;
    }
    return 0;
}
