/* compiler: 2.0/sp1p5 -O2,p */
/* near start: 10 diffs with profile "2.0/sp1p5 -O2,p" */
/* near start: 14 diffs with profile "2.0/sp1p5" */
#include "m2c.h"
typedef struct Rect {
    u16 x;
    u16 y;
    u16 w;
    u16 h;
    u32 type : 1;
    u32 mask : 16;
    u32 id : 15;
} Rect;
extern Rect data_ov117_020edc20[];
s32 func_ov117_020e4ecc(s32 px, s32 py, s32 i, s32 end, u32 type, u32 mask) {
    Rect *p;
    Rect *q;
    if (i < end) {
        u32 ty;
        u32 mk;
        p  = &data_ov117_020edc20[i];
        ty = type;
        mk = mask;
        q  = p;
        do {
            s32 x  = p->x;
            s32 x2 = x + p->w;
            s32 y  = p->y;
            s32 y2 = y + p->h;
            if (ty == q->type && (mk & q->mask) && px > x && px < x2 && py > y && py < y2) {
                return data_ov117_020edc20[i].id;
            }
            i++, p++, q++;
        } while (i < end);
    }
    return -1;
}
