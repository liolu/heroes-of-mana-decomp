/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u16 a;
    u16 pad : 14;
    u16 b : 2;
    u8 pad4[0xc];
    s32 *p10;
} Pat;
typedef struct {
    u32 w0;
    s32 w4;
    s32 w8;
} Pal;
typedef struct {
    u16 a;
    u16 pad : 14;
    u16 b : 2;
    s32 w4;
    u32 w8;
} PalH;
typedef struct {
    u32 w0;
    u32 w4;
    u32 w8;
} Dummy;
typedef struct {
    u32 w0;
    u32 w4;
    u32 pad : 4;
    u32 idx : 9;
    u32 w8 : 19;
} Bits8;
typedef struct {
    u8 pad[0x10];
    u32 pad2 : 29;
    u32 flag : 1;
} Glob10;
typedef struct {
    Glob10 *g;
} G;
typedef struct {
    u16 a;
    u16 b;
} Pair;

typedef struct {
    u32 flags;
    u32 flags4;
    u8 pad8[8];
    Pat *pat;
    PalH *pal;
    u8 pad18[2];
    u16 v1a;
    u16 v1c;
    u8 pad1e[0xe];
    u16 w2c : 1;
    u16 w2cp : 15;
    u8 pad2e[0x7e];
    void *buf;
    s32 sz;
    u8 padb4[8];
    s32 pi;
    s32 pj;
    u8 padc4[6];
    u16 pic;
    u8 padcc[0x1c];
    Bits8 *ex;
    u8 padec[8];
    u16 vf4;
} Obj;

extern Pair data_ov003_020ad768[];
extern Glob10 *data_ov000_02051548;

void DeleteObjPatOne(u16, s32);
void DeleteTexPalMap(s32, s32);
void DeleteObjPalOne(u16, s32);
Pat *getNewPattern(u16, s32);
PalH *getNewPatternPalette(u16, s32);
void OS_FreeToHeap(s32, s32, void *);
void *func_0200ed38(s32, s32, s32);
void SetUnitsGraYofs(Obj *);
s32 SearchTexPalMap(s32);
void SetTexPaletteData(s32, s32, s32, s32);
void OnceDrawObj(Obj *);

void ChangeObjPicture(Obj *o, s32 pic) {
    s32 t;
    if (o->pat != 0) {
        DeleteObjPatOne(o->pat->a, o->pat->b);
    }
    if (o->pal != 0) {
        DeleteTexPalMap(o->pj, o->pal->w8 >> 5);
        DeleteObjPalOne(o->v1c, o->pal->b);
    }
    o->pic = pic;
    if (o->ex != 0) {
        o->ex->idx = pic;
    }
    o->v1a = data_ov003_020ad768[o->pic].a;
    o->v1c = data_ov003_020ad768[o->pic].b;
    o->pat = getNewPattern(o->v1a, 0);
    if (data_ov000_02051548->flag != 0 && o->w2c != 0) {
        o->pal = getNewPatternPalette(o->v1c, 3);
    } else {
        o->pal = getNewPatternPalette(o->v1c, 0);
    }
    o->sz = *o->pat->p10;
    if (o->buf != 0) {
        OS_FreeToHeap(0, -1, o->buf);
        o->buf = 0;
    }
    o->buf = func_0200ed38(0, -1, o->sz + 0xc);
    SetUnitsGraYofs(o);
    o->pj = o->pi = SearchTexPalMap(o->pal->w8 >> 5);
    SetTexPaletteData(o->pal->w4, o->pj, o->pal->w8, 0);
    o->vf4 = 0xffff;
    OnceDrawObj(o);
    o->flags |= 0x80;
}
