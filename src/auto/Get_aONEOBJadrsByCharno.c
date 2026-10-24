/* compiler: 1.2/sp3 -profile */
#include "m2c.h"
typedef struct {
    u32 f : 1;
    u8 p[0x1a];
    u16 id;
    u8 q[0xf0];
} O;
extern O data_ov003_020b0cf0[0x42];
O *Get_aONEOBJadrsByCharno(u16 id) {
    O *o = data_ov003_020b0cf0;
    s32 i;
    for (i = 0; i < 0x42; i++, o++) {
        if (o->f && o->id == id) {
            return o;
        }
    }
    return 0;
}
