#include "m2c.h"
typedef struct Ent {
    u32 on : 1;
    u32 pad : 1;
    u32 idx : 9;
    u32 rest : 21;
    u32 k1 : 4;
    u32 rest1 : 28;
    u32 k2 : 4;
    u32 rest2 : 28;
    u32 more[10];
} Ent;
typedef struct Sub {
    u32 pad : 1;
    u32 val : 9;
    u32 rest : 22;
    u32 more[7];
} Sub;
typedef struct Root {
    u32 pad0;
    u8 *subs;
    u8 pad[0x18];
    s32 limit;
    Ent *ents;
} Root;
extern Root *data_0203673c;
extern u16 data_ov112_020ec584;
s32 func_ov112_020e1ce8(s32);
s32 func_ov112_020e8d34(s32 arg) {
    s32 i;
    s32 off;
    Ent *e;
    for (i = 0, off = 0; i < 0x58; i++, off += 0x34) {
        Root *r = data_0203673c;
        e       = (Ent *) ((u8 *) r->ents + off);
        if (e->on) {
            Sub *s = (Sub *) (r->subs + 8) + e->idx;
            if (data_ov112_020ec584 == e->k1) {
                if (func_ov112_020e1ce8(s->val) < data_0203673c->limit) {
                    if (arg == e->k2) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
