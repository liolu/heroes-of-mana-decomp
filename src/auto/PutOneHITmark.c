/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Trs {
    u32 a : 5;
    u32 b : 8;
    u32 c : 8;
    u32 d : 1;
    u32 e : 10;
} Trs;

typedef struct Obj {
    u32 pa0 : 6;
    u32 b6 : 1;
    u32 pb0 : 25;
    u8 pad4[4];
    u32 pa8 : 29;
    u32 b29 : 1;
    u32 pb8 : 2;
    u8 padc[0x2c];
    u8 id;
    u8 pad39[7];
    s32 x;
    s32 y;
    s32 z;
    s32 w;
    u8 pad50[0x3a];
    u16 a;
    u16 pad8c;
    s16 b;
} Obj;
typedef struct Glob {
    u8 pad0[4];
    u32 pa4 : 16;
    u32 b16 : 1;
    u32 pb4 : 15;
    u8 pad8[8];
    u32 pa10 : 28;
    u32 b28 : 1;
    u32 b29 : 1;
    u32 pb10 : 2;
    u8 pad14[0x1cc];
    s32 rotB;
    s32 rotA;
} Glob;

void DeleteMap_ObjectOneByIDandOpt(s32, s32);
s32 GetRnd(void);
void MTX_MultVec33(void *, void *, void *);
void Ring_SoundEffect(s32);
void SetOneHitMarkWork(s32, void *, s32);
void SetTrsDataForEtc(void *, s32);
void func_020085a4(void *, s32, s32);
void func_020085c0(void *, s32, s32);
extern s16 data_02030644;
extern Glob *data_ov000_02051548;
extern u16 data_ov003_020a7c14[];

void PutOneHITmark(Obj *o, s32 idx, s32 flag) {
    s32 out[3];
    s32 v[3];
    s32 tmp[3];
    s32 m[9];
    Trs t;
    s32 i;

    if (data_ov000_02051548->b29 && !data_ov000_02051548->b28) {
        t.a = 7;
        t.b = o->id;
        t.c = idx;
        t.d = flag;
        SetTrsDataForEtc(&t, 4);
    }
    if (flag == 0) {
        Ring_SoundEffect(data_ov003_020a7c14[idx]);
    } else {
        Ring_SoundEffect(0x23c);
    }
    if (o->b6 && !data_ov000_02051548->b16) {
        if (!o->b29) {
            DeleteMap_ObjectOneByIDandOpt(4, o->id);
        }
        v[0] = 0;
        v[2] = (o->b - (o->a >> 1)) * 0x2aa;
        if (o->b29) {
            v[0] += ((GetRnd() & 0x1f) - 0x10) * 0x2aa;
            v[2] += ((GetRnd() & 0x1f) - 0x10) * 0x2aa;
            v[1] = 0x4e20;
        } else {
            v[0] += ((GetRnd() & 7) - 4) * 0x2aa;
            v[2] += ((GetRnd() & 7) - 4) * 0x2aa;
            v[1] = 1000;
        }
        i = (u16) ((-data_ov000_02051548->rotA << 16) / 1200) >> 4;
        i *= 2;
        func_020085a4(m, *(s16 *) ((u8 *) &data_02030644 + i * 2), *(s16 *) ((u8 *) &data_02030644 + (i + 1) * 2));
        MTX_MultVec33(v, m, tmp);
        i = (u16) ((-data_ov000_02051548->rotB << 16) / 1200) >> 4;
        i *= 2;
        func_020085c0(m, *(s16 *) ((u8 *) &data_02030644 + i * 2), *(s16 *) ((u8 *) &data_02030644 + (i + 1) * 2));
        MTX_MultVec33(tmp, m, v);
        out[0] = o->x + v[0];
        out[1] = v[1] + (o->y + o->w);
        out[2] = o->z + v[2];
        SetOneHitMarkWork(idx, out, o->id);
    }
}
