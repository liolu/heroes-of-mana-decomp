#include "m2c.h"

typedef struct Obj946c {
    u8 pad[0x14];
    s32 a;
    s32 *tab;
} Obj946c;

s32 func_ov004_020c946c(Obj946c *o, s32 i) {
    return o->a + o->tab[i];
}
