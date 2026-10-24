/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad0 : 8;
    u32 f : 1;
    u32 pad1 : 23;
} SubB;
typedef struct {
    u32 a;
    u32 b;
    SubB *s;
} Dummy;
typedef struct {
    u32 f0 : 1;
    u32 pad : 13;
    u32 act : 8;
    u32 rest : 10;
    u32 pad2[0x39];
    SubB *s;
} Obj;
s32 CanChangeAction(Obj *o) {
    s32 r;
    s32 a;
    if (o->f0 == 0) {
        return 0;
    }
    if (o->s == 0) {
        return 0;
    }
    if (*((u32 *) o->s + 2) << 8 >> 31 != 0) {
        return 0;
    }
    a = o->act;
    if (a == 0x10) {
        return 0;
    }
    if (a != 0xf) {
        return 1;
    }
    return 0;
}
