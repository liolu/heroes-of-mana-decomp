#include "m2c.h"

typedef struct {
    u32 id;
    s32 size;
} Ent;
typedef struct {
    u8 pad0[8];
    s32 total;
    u8 pad1[0x10];
    s32 count;
    Ent *ents;
} Area;
void ReleaseTexAreaOne(u32);

void func_ov004_020ba5d4(Area *a) {
    s32 i;
    for (i = 0; i < a->count; i++) {
        if (a->ents[i].id < 0xF0000000) {
            ReleaseTexAreaOne(a->ents[i].id);
            a->total -= a->ents[i].size;
        }
    }
    a->count = 0;
}
