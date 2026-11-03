/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"
typedef struct {
    u16 x;
    u16 y;
    u16 w;
    u16 h;
    u32 flag : 1;
    u32 mask : 16;
    u32 id : 15;
} E;
extern E data_ov114_020e5680[];
s32 func_ov114_020e2438(s32 x, s32 y, s32 i, s32 end, u32 flag, u32 mask) {
    if (i < end) {
        E *e   = &data_ov114_020e5680[i];
        E *f   = e;
        u32 fl = flag;
        u32 mk = mask;
        do {
            s32 ex = e->x;
            s32 r  = ex + e->w;
            s32 ey = e->y;
            s32 b  = ey + e->h;
            if (fl == f->flag && (mk & f->mask) != 0 && x > ex && x < r && y > ey && y < b) {
                return data_ov114_020e5680[i].id;
            }
            i++;
            e++;
            f++;
        } while (i < end);
    }
    return -1;
}
