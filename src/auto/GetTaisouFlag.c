/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Obj {
    u8 pad[0x2c];
    u16 f0 : 1;
    u16 rest : 15;
    u8 pad2[0xe8 - 0x2e];
    struct Id *id;
} Obj;
typedef struct Id {
    u32 pad : 11;
    u32 n : 8;
    u32 rest : 13;
} Id;
typedef struct Rec {
    u32 a;
    u32 b;
    u32 k : 3;
    u32 rest : 29;
    u32 c;
    u32 d;
} Rec;
typedef struct Ent {
    u32 a;
    u32 b;
    u32 pad : 18;
    u32 t : 5;
    u32 rest : 9;
} Ent;
typedef struct G {
    u8 pad[8];
    Rec *recs;
    u32 pad2;
    Ent *tab;
} G;
extern G *data_0203673c;
s32 GetTaisouFlag(Obj *o, s32 idx) {

    s32 f = o->f0 ^ 1;
    if (data_0203673c->recs[idx].k == 2) {
        if (((Ent *) ((u8 *) data_0203673c->tab + o->id->n * 4))->t != 4) {
            f ^= 1;
        }
    } else {
        if (((Ent *) ((u8 *) data_0203673c->tab + o->id->n * 4))->t == 4) {
            f ^= 1;
        }
    }
    return f;
}
