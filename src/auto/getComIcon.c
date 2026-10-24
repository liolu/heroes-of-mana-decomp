/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct N {
    s32 x;
    s32 y;
    u8 w;
    u8 h;
    s8 ox;
    s8 oy;
    u32 f : 1;
    u32 f1 : 1;
    u32 f2 : 2;
    u32 f4 : 1;
    u32 f5 : 15;
    u32 f20 : 1;
    u32 f21 : 11;
    u8 p10[0x60];
    u16 icon;
    u8 p72[10];
    struct N *next;
} N;

typedef struct {
    u8 p[0x7AC];
    u16 v;
} G;

typedef struct {
    u8 p[8];
    N *cur;
} R;

extern G *data_ov000_02051548;
extern R data_ov003_020b6430;

u16 getComIcon(N *n, s32 a1, s32 a2) {
    if (n != 0) {
        G *g = data_ov000_02051548;
        do {
            if (n->icon != 0xFFFF) {
                if (n->f4 == g->v && n->f20 == 0 && n->f1 != 0) {
                    s32 xx = n->x + n->ox;
                    s32 w  = n->w;
                    if (xx - w < a1 && w + xx > a1) {
                        s32 yy = n->y + n->oy;
                        s32 h  = n->h;
                        if (yy - h < a2 && h + yy > a2) {
                            data_ov003_020b6430.cur = n;
                            return n->icon;
                        }
                    }
                }
            }
            n = n->next;
        } while (n != 0);
    }
    return 0xFFFF;
}
