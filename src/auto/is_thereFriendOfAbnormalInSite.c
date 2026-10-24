/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Sub {
    u32 a : 11;
    u32 flag : 8;
    u32 b : 13;
    u32 c;
    u32 d : 23;
    u32 e : 1;
    u32 f : 8;
} Sub;
typedef struct U {
    u32 active : 1;
    u32 w0 : 31;
    u32 p0;
    u32 q0 : 23;
    u32 kind : 4;
    u32 q1 : 5;
    u8 p1[0x20];
    u16 team : 1;
    u16 t2 : 15;
    u8 p2[0x32];
    s8 x;
    s8 y;
    u8 p3[10];
    u32 m6c;
    u32 m70;
    u8 p4[8];
    void *p7c;
    u8 p5[0x68];
    Sub *sub;
    u8 p6[0x24];
} U;
typedef struct Gl {
    u8 p[0x14];
    u32 q : 8;
    u32 g : 4;
    u32 r : 20;
} Gl;
extern U data_ov003_020b0cf0[];
extern Gl *data_ov000_02051548;
s32 CheckCanTargetting(U *);
s32 checkCanSeeUnitByUser(U *);
s32 CheckAreaMapMaskForEnemy(s32, s32);
s32 FX_Sqrt(s32);

s32 is_thereFriendOfAbnormalInSite(U *me, u32 team) {
    U *u;
    s32 i;
    s32 best;
    s32 idx;
    u    = data_ov003_020b0cf0;
    best = 0x2710000;
    idx  = -1;
    for (i = 0; i < 0x42; i++, u++) {
        if (u->active != 0 && u->kind < 4 && u->team == team && u->sub != 0 && u->sub->e == 0 && CheckCanTargetting(u) != 0 &&
            u->sub->flag != 0 && u->p7c != 0) {
            s32 r;
            u32 g = data_ov000_02051548->g;
            u32 k = me->kind;
            if (k == g || k == g + 2) {
                r = checkCanSeeUnitByUser(u);
            } else {
                r = CheckAreaMapMaskForEnemy(u->x, u->y);
            }
            if (r == 1) {
                s32 dx = u->y - me->y;
                s32 dy = u->x - me->x;
                s32 d  = FX_Sqrt((dy * dy + dx * dx) << 12);
                if ((u->m70 & me->m6c) == 0) {
                    d += 0x64000;
                }
                if (best > d) {
                    best = d;
                    idx  = i;
                }
            }
        }
    }
    return idx;
}
