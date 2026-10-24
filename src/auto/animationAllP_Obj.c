/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 f : 1;
    u8 p[0x10c];
} O;
extern O data_ov003_020b0cf0[0x42];
extern void Animation_aONEOBJ(O *, s32);
void animationAllP_Obj(s32 a) {
    s32 i;
    O *o = data_ov003_020b0cf0;
    for (i = 0; i < 0x42; i++, o++) {
        if (o->f) {
            Animation_aONEOBJ(o, a);
        }
    }
}
