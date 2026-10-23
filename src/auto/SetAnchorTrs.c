/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Obj {
    u8 pad[0x38];
    u8 b38;
    u8 pad2[0xa8 - 0x39];
    u16 f1 : 7;
    u16 f2 : 7;
    u16 f3 : 2;
} Obj;
typedef struct Dst {
    u32 a : 5;
    u32 b : 6;
    u32 c : 2;
    u32 d : 6;
    u32 e : 6;
    u32 rest : 7;
} Dst;
typedef struct G {
    u8 pad[0x4c4];
    u8 *base;
    u8 pad2[0x4d0 - 0x4c8];
    s32 off;
} G;
extern G *data_ov000_02051548;
void SetAnchorTrs(Obj *o) {
    Dst *d = (Dst *) (data_ov000_02051548->base + data_ov000_02051548->off);
    d->a   = 4;
    d->b   = o->b38;
    d->c   = o->f3;
    d->d   = o->f1;
    d->e   = o->f2;
    data_ov000_02051548->off += 4;
}
