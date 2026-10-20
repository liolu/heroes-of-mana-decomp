/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 active:1;
    u32 :30;
    u32 used:1;
    u32 type:4;
    u32 :1;
    u32 a:1;
    u32 b:2;
    u8 pad[0x2C];
} Ent;

extern void *data_0203673c;

s32 GetNowUnitKazu(void *arg0) {
    void *g;
    s32 i;
    s32 count;
    Ent *base;
    s32 off;
    Ent *e;
    u8 *q;

    count = 0;
    g = data_0203673c;
    i = 0;
    base = M2C_FIELD(g, Ent **, 0x24);
    off = 0;
    do {
        if (base->active) {
            q = M2C_FIELD(g, u8 **, 0x24);
            e = (Ent *) (q + off);
            if (!e->used) {
                if ((((u32) (M2C_FIELD(arg0, s32 *, 4) << 0x1E) >> 0x1E)) == e->type) {
                    if ((e->a == 0) || ((e->a != 0) && (((u32) (e->b - 2)) <= 1U))) {
                        count += 1;
                    }
                }
            }
        }
        i += 1;
        base = (Ent *) ((u8 *) base + 0x34);
        off += 0x34;
    } while (i < 0x58);
    return count;
}