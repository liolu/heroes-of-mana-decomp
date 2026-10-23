/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad0;
    u32 w4;
    u32 pad : 23;
    u32 b23 : 1;
    u32 rest : 8;
} P;
typedef struct {
    u8 v : 7;
    u8 f : 1;
} BB;
typedef struct O {
    u32 flag : 1;
    u32 pad : 31;
    u8 p4[4];
    u32 pad8 : 23;
    u32 team : 4;
    u32 rest8 : 5;
    u8 pc[0x2C];
    u8 b38;
    u8 p39[0x27];
    s8 x;
    s8 y;
    u8 p62[0x86];
    P *pe8;
    u8 pEC[0x24];
} O;
typedef struct {
    u8 pad[0x28];
    u8 *p28;
} G;
typedef struct {
    u8 pad[0x14];
    u32 pad0 : 8;
    u32 h : 4;
    u32 rest : 20;
} H;
extern O data_ov003_020b0cf0[];
extern G *data_0203673c;
extern H *data_ov000_02051548;
s32 CheckAreaMapMaskForEnemy(s32, s32);
s32 checkCanSeeUnitByUser(O *);
void researchHookObj(O *self) {
    O *o = data_ov003_020b0cf0;
    BB *bb;
    s32 i, j, flag, r;
    u32 team = self->team;
    u8 id;
    if (team < 4) {
        bb   = (BB *) (data_0203673c->p28 + team * 0x2D0 + 0x2B4);
        flag = (team & 1) != data_ov000_02051548->h;
        for (i = 0; i < 66; i++, o++) {
            P *p;
            if (o->flag != 0 && (p = o->pe8) != 0 && p->b23 == 0 && o->team == 4) {
                if (flag != 0) {
                    r = CheckAreaMapMaskForEnemy(o->x, o->y);
                } else {
                    r = checkCanSeeUnitByUser(o);
                }
                if (r == 1) {
                    id = o->b38;
                    for (j = 0; j < 12; j++) {
                        if (id == bb[j].v) {
                            break;
                        }
                        if (bb[j].v == 0x7F) {
                            bb[j].v = id;
                            bb[j].f = 0;
                            break;
                        }
                    }
                }
            }
        }
    }
}
