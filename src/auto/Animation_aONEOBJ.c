/* compiler: 2.0/sp1p5 -profile */
/* near start: 3 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct O {
    u32 a0 : 2;
    u32 b2 : 1;
    u32 a3 : 3;
    u32 b6 : 1;
    u32 b7 : 1;
    u32 a8 : 22;
    u32 b30 : 1;
    u32 b31 : 1;
    u8 pad4[4];
    u32 a8w : 29;
    u32 b29 : 1;
    u32 a8z : 2;
    u8 padC[0xAC - 0xC];
    s32 fAC;
    u8 padB0[8];
    s32 fB8;
    u8 padBC[0xF6 - 0xBC];
    u16 fF6;
    u16 fF8;
    s16 fFA;
    u16 fFC;
    u16 fFE;
    u16 f100;
} O;

typedef struct G {
    u8 pad[0x20];
    u32 pad2 : 12;
    u32 b12 : 1;
    u32 rest : 19;
} G;

typedef struct G2 {
    u8 pad[0xAF4];
    s32 fAF4;
} G2;

u32 GetTexArea(s32);
void SetTex(s32, u32, s32, void *);
void changeUnitPatNo(O *);
void setP_ObjTexture(O *, u16);
extern G *data_ov000_02051548;
extern G2 *data_ov000_0205154c;

void Animation_aONEOBJ(O *o, s32 flag) {
    s32 v;
    u32 r;
    u32 q;
    s16 t;

    if (o->b29 == 0) {
        if (o->b30 == 0 && (flag != 0 || o->b2 != 0)) {
            t = o->fFA;
            if (t != 0) {
                o->fFA = t - data_ov000_0205154c->fAF4;
            }
            if (o->fFA <= 0) {
                v = o->fF6 + 1;
                if (v >= o->fF8) {
                    if (o->b31 != 0) {
                        o->b30 = 1;
                    } else {
                        o->fF6 = 0;
                    }
                } else {
                    o->fF6 = v;
                }
                if (o->b30 == 0) {
                    changeUnitPatNo(o);
                }
            }
        }
        if (o->b6 != 0 && o->b7 != 0 && data_ov000_02051548->b12 == 0 && o->fB8 == -1) {
            setP_ObjTexture(o, o->fFC);
            r = GetTexArea((o->fFE * o->f100) / 2);
            q = o->fB8 = r;
            if (q != -1U) {
                SetTex(o->fAC + 0xC, q, (o->fFE * o->f100) / 2, (u8 *) o + 0x10C);
                o->b7 = 0;
            }
        }
    }
}
