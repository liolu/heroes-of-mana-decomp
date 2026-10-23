#include "m2c.h"
typedef struct TE {
    u32 kind : 3;
    u32 c : 29;
    u32 d;
} TE;
typedef struct Ent {
    u8 p[0xc];
    u8 k[3];
    u8 q[0x25];
} Ent;
typedef struct Root {
    u8 p0[0xc];
    u8 *tab;
    u8 p1[0x14];
    Ent *ents;
} Root;
typedef struct Hdr {
    u8 pad[0x80];
    u16 idx;
} Hdr;
extern Root *data_0203673c;
extern u32 data_ov112_020eca1c[];
extern Hdr data_ov112_020ec988;
s32 func_ov112_020e1c98(void);
s32 func_ov112_020e6274(s32 arg) {
    Ent *e;
    s32 k;
    u32 kind;
    u32 v;
    if (func_ov112_020e1c98() == 0) {
        return 0;
    }
    v    = data_ov112_020eca1c[arg] >> 16;
    kind = ((TE *) (data_0203673c->tab + v * 8 + 8))->kind;
    e    = &data_0203673c->ents[data_ov112_020ec988.idx];
    switch (kind) {
        case 1:
            k = 0;
            break;
        case 2:
            k = 1;
            break;
        case 3:
            k = 2;
            break;
        default:
            return 0;
    }
    {
        u32 t = e->k[k];
        return t == v;
    }
}
