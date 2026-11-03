/* compiler: 2.0/sp1p5 -profile */
/* near start: 5 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"
typedef struct Ent {
    u32 on : 1;
    u32 pad : 31;
    u32 pad1 : 5;
    u32 down : 1;
    u32 pad2 : 26;
    u8 rest[0x2c];
} Ent;
typedef struct Grp {
    u8 pad[0x264];
    u16 ids[0x25];
    u8 rest[0x2d0 - 0x264 - 0x4a];
} Grp;
typedef struct Root {
    u8 pad[0x24];
    Ent *ents;
    Grp *grps;
} Root;
extern Root *data_0203673c;
s32 GetNoInCanOut(s32 g, s32 n) {
    s32 i;
    s32 cnt;
    Root *r;
    u16 id;
    Ent *e;
    r   = data_0203673c;
    cnt = 0;
    i   = cnt;
    for (; i < 0x25; i++) {
        id = r->grps[g].ids[i];
        if (id != 0xffff) {
            e = &r->ents[id];
            if (e->on && !e->down) {
                if (cnt == n) {
                    return i;
                }
                cnt++;
            }
        }
    }
    return -1;
}
