/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u16 a;
    u16 b;
} P;
void *SearchObjPatSub(P **pp, s32 k, s32 m) {
    P *p = *pp;
    if (p == 0) {
        return 0;
    }
    if (p->a == k && (u32) ((u32) p->b << 16) >> 30 == m) {
        return pp;
    }
    return SearchObjPatSub((P **) ((u8 *) p + 0x14), k, m);
}
