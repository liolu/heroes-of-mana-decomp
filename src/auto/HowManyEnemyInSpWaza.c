/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Ent {
    u32 pad0;
    u32 pad4;
    u32 pad8 : 29;
    u32 cls : 3;
    u32 pad_c[2];
} Ent;
typedef struct Tbl {
    u8 pad[8];
    Ent *ents;
} Tbl;
typedef struct U {
    u8 pad[0xD6];
    u16 id;
    u8 pad_d8[0xE4 - 0xD8];
    s32 e4;
} U;
extern Tbl *data_0203673c;
void *GetUnitForAttack(U *, s32, s32 *, s32 *, s32, s32);
void OS_FreeToHeap(s32, s32, void *);

s32 HowManyEnemyInSpWaza(U *u) {
    s32 cnt;
    s32 other;
    void *r;
    if (u->e4 == 0) {
        return 0;
    }
    if (u->id == 0) {
        return 0;
    }
    r = GetUnitForAttack(u, u->id, &cnt, &other, 1, data_0203673c->ents[u->id].cls);
    if (r != 0) {
        OS_FreeToHeap(0, -1, r);
    }
    return cnt;
}
