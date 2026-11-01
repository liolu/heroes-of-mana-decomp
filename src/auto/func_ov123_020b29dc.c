/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Obj29dc {
    s32 *tab;
    s32 base;
} Obj29dc;

s32 func_ov123_020b29dc(Obj29dc *o, s32 i) {
    return o->base + o->tab[i & 0xffff];
}
