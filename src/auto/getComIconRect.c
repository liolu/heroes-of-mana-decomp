/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Ico {
    s32 x;
    s32 y;
    u8 w;
    u8 h;
    s8 ox;
    s8 oy;
    u32 f0 : 1;
    u32 f1 : 1;
    u32 f2 : 2;
    u32 f4 : 1;
    u32 f5 : 15;
    u32 f20 : 1;
    u32 f21 : 11;
    u8 pad[0x70 - 0x10];
    u16 id;
    u8 pad2[0x7c - 0x72];
    struct Ico *next;
} Ico;

typedef struct {
    u8 pad[0x7ac];
    u16 mode;
} G;

typedef struct {
    u8 pad[8];
    Ico *cur;
} Sel;

extern G *data_ov000_02051548;
extern Sel data_ov003_020b6430;

u16 getComIconRect(Ico *p, s32 x, s32 y, u32 lo, u32 hi) {
    while (p != NULL) {
        u16 id = p->id;
        if (id != 0xFFFF && p->f4 == data_ov000_02051548->mode && p->f1 && !p->f20) {
            if (lo <= id && id <= hi) {
                s32 cx = p->x + p->ox;
                if (cx - p->w < x && p->w + cx > x) {
                    s32 cy = p->y + p->oy;
                    if (cy - p->h < y && p->h + cy > y) {
                        data_ov003_020b6430.cur = p;
                        return p->id;
                    }
                }
            }
        }
        p = p->next;
    }
    return 0xFFFF;
}
