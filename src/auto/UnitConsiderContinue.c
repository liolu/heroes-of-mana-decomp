/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s8 GetHookObjNo(u32, u32);
void PutStatusGra(void *);
void SetHookCondSt(void *);
s32 SetNowDownId_i2(s8, s8, void *);
void changeAnchoMode(void *);
void changeOccasion(s32, void *, void *, s32, s32);

typedef struct {
    u32 pad0 : 11;
    u32 f11 : 8;
    u32 pad1 : 13;
    u32 pad4;
    u32 pad8a : 23;
    u32 b23 : 1;
    u32 pad8b : 8;
    u8 pad0c[0x1C - 0xC];
    u8 b1c;
    s8 s1d;
    s8 s1e;
    s8 s1f;
    u8 b20;
    s8 s21;
    s8 s22;
    s8 s23;
    s32 w24;
    u8 pad28[4];
    u16 h2c;
} Src;

typedef struct {
    u32 b0 : 1;
    u32 pad0 : 31;
    u8 pad4[0x60 - 4];
    s8 s60;
    s8 s61;
    u8 pad62[0x6C - 0x62];
    s32 w6c;
    s32 w70;
    u8 pad74[0xA8 - 0x74];
    u16 f0 : 7;
    u16 f1 : 7;
    u16 f2 : 2;
    u8 g0 : 7;
    u8 g1 : 1;
    s8 sab;
    u8 pad_ac[0xCC - 0xAC];
    u8 bcc;
    s8 scd;
    s8 sce;
    s8 scf;
    u8 bd0;
    s8 sd1;
    s8 sd2;
    s8 sd3;
    u8 padd4[0xE8 - 0xD4];
    Src *e8;
    u8 pade[0x110 - 0xEC];
} Obj;
extern Obj data_ov003_020b0cf0[];

void UnitConsiderContinue(s32 idx) {
    Obj *o;
    Src *s;
    o = &data_ov003_020b0cf0[idx];
    if (o->b0 && (s = o->e8) != 0) {
        if (!s->b23) {
            if (s->b1c == 5) {
                o->bcc = 0;
                o->sce = -1;
                o->scf = -1;
                o->f0  = s->s1e;
                o->f1  = s->s1f;
                o->g0  = 0x5A;
                o->f2  = 2;
                o->g1  = 1;
                o->sab = GetHookObjNo(o->f0, o->f1);
                SetHookCondSt(o);
                changeAnchoMode(o);
            } else {
                o->bcc = s->b1c;
                o->scd = s->s1d;
                o->sce = s->s1e;
                o->scf = s->s1f;
                changeOccasion(4, &o->bcc, o, 0, 0);
            }
        }
        o->bd0 = s->b20;
        o->sd1 = s->s21;
        o->sd2 = s->s22;
        o->sd3 = s->s23;
        o->w6c = s->w24;
        o->w70 = SetNowDownId_i2(o->s60, o->s61, o);
        if (s->f11 != 0 && s->h2c != 0) {
            PutStatusGra(o);
        }
    }
}
