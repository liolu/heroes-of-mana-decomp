/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 8;
    u32 f : 1;
} W;
typedef struct {
    u8 pad[0x38];
    u8 no;
    u8 pad2[0xaf];
    W *w;
} O;
extern O *Get_aONEOBJadrsByCharno(s32 c);
s32 GetAooNoFromCharNo(s32 c) {
    O *o = Get_aONEOBJadrsByCharno(c);
    if (o == 0) {
        return -1;
    }
    if (o->w == 0) {
        return -1;
    }
    if (*(u32 *) ((u8 *) o->w + 8) << 8 >> 31) {
        return -1;
    }
    return o->no;
}
