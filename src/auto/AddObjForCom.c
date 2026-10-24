/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    s16 x[2];
    s16 y[2];
    u8 pad2[2];
    s16 f1a;
    u8 pad3[0xA];
    u16 f26;
    u16 f28;
    u8 f2a;
} O;
void ObjAnimePatWorkSetForAob2Data(void *, void *);
void KeepMaxChr(void *, void *);

void AddObjForCom(O *o, s16 a, u16 flags, void *p, s32 b, u16 idx) {
    s16 *q;
    o->x[0] = 0;
    o->y[0] = 0;
    o->x[1] = 0;
    o->y[1] = 0;
    q       = (s16 *) o + idx;
    q[8]    = a;
    q[10]   = 1;
    o->f1a  = flags & ~0x8000;
    o->f2a  = b;
    o->f26  = 0xFFFF;
    o->f28  = 0xFFFF;
    ObjAnimePatWorkSetForAob2Data(p, o);
    if (flags & 0x8000) {
        KeepMaxChr(p, o);
    }
}
