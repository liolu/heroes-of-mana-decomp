#include "m2c.h"
extern struct {
    u8 pad[0x24];
    u8 *ents;
} *data_0203673c;
typedef struct Ent {
    u32 used : 1;
    u32 pad : 18;
    u32 id : 12;
    u32 top : 1;
    u32 rest[12];
} Ent;

s32 func_02002414(s32 arg) {
    s32 i;
    Ent *p;
    s32 off;
    i   = 0;
    off = 0;
    p   = (Ent *) data_0203673c->ents;
    for (; i < 0x58; i++) {
        if (p->used != 0 && ((Ent *) (data_0203673c->ents + off))->id == arg) {
            return i;
        }
        p++;
        off += 0x34;
    }
    return -1;
}
