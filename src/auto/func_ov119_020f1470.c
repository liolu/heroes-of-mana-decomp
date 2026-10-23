#include "m2c.h"
typedef struct Mv {
    u32 active : 1;
    u32 pad : 31;
    s32 x1;
    s32 y1;
    s32 total;
    s32 cur;
    s32 outx;
    s32 outy;
    s32 x0;
    s32 y0;
} Mv;
extern Mv data_ov119_020f1e98[2];
s32 func_0202d478(s32, s32);
void func_ov119_020f1470(void) {
    s32 i;
    s32 cur;
    Mv *m;
    s32 dy;
    s32 dx;
    s32 x0;
    s32 total;
    m = data_ov119_020f1e98;
    for (i = 0; i < 2; i++, m++) {
        if (m->active) {
            cur     = m->cur;
            total   = m->total;
            dy      = func_0202d478(cur * (m->y1 - m->y0), total);
            x0      = m->x0;
            dx      = func_0202d478(cur * (m->x1 - x0), total);
            m->outx = dx + x0;
            m->outy = dy + m->y0;
            if (m->cur < m->total) {
                m->cur = m->cur + 1;
            } else {
                m->outx   = m->x1;
                m->outy   = m->y1;
                m->active = 0;
            }
        }
    }
}
