/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad0;
    u32 w4_0 : 13;
    u32 sz : 2;
    u32 w4_1 : 17;
} W;

typedef struct {
    u32 pad0[2];
    u32 p0 : 8;
    u32 p1 : 15;
    u32 f23 : 1;
    u32 p2 : 8;
} P;

typedef struct {
    u32 act : 1;
    u32 p0 : 7;
    u32 dir : 3;
    u32 p1 : 3;
    u32 id : 8;
    u32 p2 : 1;
    u32 f23 : 1;
    u32 p3 : 7;
    u32 b31 : 1;
    u8 pad4[0x2e - 4];
    s16 w2e;
    u8 pad1[0x3a - 0x30];
    s8 b3a;
    u8 pad2;
    s32 w3c;
    u8 pad3[0x22 - 0x20 + 0x20 - 0x20];
} Dummy;

typedef struct {
    u32 w0;
    u8 pad[0x1e];
} Unused;

typedef struct {
    u32 act : 1;
    u32 p0 : 7;
    u32 dir : 3;
    u32 p1 : 3;
    u32 id : 8;
    u32 p2 : 1;
    u32 f23 : 1;
    u32 p3 : 7;
    u32 b31 : 1;
    u8 pad4[0x1e];
    u16 w22;
    u8 pad5[0x2e - 0x24];
    s16 w2e;
    u8 pad6[0x3a - 0x30];
    s8 b3a;
    u8 pad7;
    s32 w3c;
    u8 pad8[0xd4 - 0x40];
    s16 d4;
    s16 d6;
    u8 pad9[0xe4 - 0xd8];
    W *e4;
    P *pe8;
} O;

typedef struct {
    u8 pad[8];
    u8 *tbl;
} G;

typedef struct {
    u8 pad[0x116];
    u16 cnt;
} H;

extern G *data_0203673c;
extern H *data_ov000_02051548;

void changeAnimationObj(O *, s32, u32);
void SetATTACK_RagTime(O *);
void OutPutFlyArm(O *);

void ActionWazaByLogic(O *o, s32 anim, s32 waza, s32 v) {
    u32 a;

    a = o->f23;
    if (o->act != 0 && o->pe8 != 0) {
        if (o->pe8->f23 == 0) {
            o->id  = 2;
            o->f23 = 0;
            changeAnimationObj(o, anim, o->dir);
            o->f23 = a;
            o->b31 = 1;
            o->w3c = 0;
            o->d4  = 1;
            o->d6  = waza;
            o->e4  = (W *) (data_0203673c->tbl + 8 + waza * 0x14);
            o->w2e = o->e4->sz;
            SetATTACK_RagTime(o);
            if (v >= 0) {
                o->b3a = v;
            }
            data_ov000_02051548->cnt = data_ov000_02051548->cnt + 1;
            o->w22                   = data_ov000_02051548->cnt;
            OutPutFlyArm(o);
        }
    }
}
