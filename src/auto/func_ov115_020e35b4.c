/* near start: 6 diffs with profile "2.0/sp1p5" */
/* near start: 8 diffs with profile "2.0/sp1p5" */
#include "m2c.h"
typedef struct Ent {
    u16 x;
    u16 y;
    u16 w;
    u16 h;
    u32 kind : 1;
    u32 mask : 16;
    u32 id : 15;
} Ent;
extern Ent data_ov115_020e7f50[];
s32 func_ov115_020e35b4(s32 px, s32 py, s32 start, s32 end, s32 kind, s32 mask) {
    Ent *e;
    Ent *f;
    if (start < end) {
        e = &data_ov115_020e7f50[start];
        f = e;
        do {
            s32 x0 = e->x;
            s32 x1 = x0 + e->w;
            s32 y0 = e->y;
            s32 y1 = y0 + e->h;
            if (f->kind == kind && (f->mask & mask) != 0 && px > x0 && px < x1 && py > y0 && py < y1) {
                return data_ov115_020e7f50[start].id;
            }
            e++;
            f++;
            start++;
        } while (start < end);
    }
    return -1;
}
