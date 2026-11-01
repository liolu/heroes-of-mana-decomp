#include "m2c.h"

typedef struct Obj9cd8 {
    u8 pad[0xc];
    u8 *p;
} Obj9cd8;

s32 func_ov004_020b9cd8(Obj9cd8 *o) {
    u8 *p = o->p;
    u8 c  = *p;

    o->p = p + 1;
    return c != 0;
}
