/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad;
    u32 a0 : 10;
    u32 a1 : 5;
    u32 a2 : 5;
    u32 a3 : 12;
    u32 b0 : 5;
    u32 b1 : 17;
    u32 b2 : 1;
    u32 b3 : 9;
} O;
u32 GetObjAlpha(O *o) {
    if (o->b2) {
        return o->b0;
    }
    if (o->a2 == 31) {
        return o->a1;
    }
    return o->a2;
}
