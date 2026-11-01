#include "m2c.h"

typedef struct Obj9cc0 {
    u8 pad[0x38];
    s32 *tab;
} Obj9cc0;

s32 func_ov004_020c9cc0(Obj9cc0 *o, s32 i) {
    return o->tab[i];
}
