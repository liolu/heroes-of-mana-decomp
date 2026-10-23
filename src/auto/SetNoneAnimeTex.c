/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} PalInfo;
typedef struct {
    u32 cnt;
    u32 ent[1];
} PatList;
typedef struct {
    u32 pad0;
    u32 base;
    u32 pad8;
    PatList *list;
    u32 *sz;
} PatInfo;
typedef struct {
    s32 area;
    s16 f4;
    u16 f6;
    u16 f8;
    u16 fa;
    u16 fc;
    u16 fe;
    u16 f10;
    u16 f12;
} TexEnt;
typedef struct {
    PatInfo *pat;
    PalInfo *pal;
    s32 size;
    s32 palmap;
    u32 count;
    TexEnt *tex;
} Obj;
typedef struct {
    u16 h[6];
} Hdr;

M2C_UNK DC_FlushAll();
M2C_UNK GX_BeginLoadTex();
M2C_UNK GX_EndLoadTex();
M2C_UNK GX_LoadTex(void *, s32, s32);
s32 GetTexArea(s32);
M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, void *);
M2C_UNK ReadAnaFileOfsSize(s32, void *, s32);
s32 SearchTexPalMap(u32);
M2C_UNK SetTexPaletteData(s32, s32, u32, M2C_UNK);
void *func_0200ed38(M2C_UNK, M2C_UNK, s32);
void *getNewPattern(M2C_UNK);
void *getNewPatternPalette(M2C_UNK, s32);

void SetNoneAnimeTex(Obj *o, s32 a, s32 b) {
    u32 i;
    Hdr *h;
    s32 off;
    o->pat    = getNewPattern(b);
    o->pal    = getNewPatternPalette(b, a);
    o->count  = o->pat->list->cnt;
    o->tex    = func_0200ed38(0, -1, o->count * 0x14);
    o->size   = *o->pat->sz;
    o->palmap = SearchTexPalMap(o->pal->c >> 5);
    h         = func_0200ed38(0, -1, o->size + 0xC);
    GX_BeginLoadTex();
    i = 0;
    if (i < o->count) {
        off = 0;
        do {
            ReadAnaFileOfsSize(o->pat->base + (o->pat->list->ent[i] & 0xFFFFFF), h, o->size + 0xC);
            *(s32 *) ((u8 *) o->tex + off)        = GetTexArea(o->size);
            *(s16 *) ((u8 *) o->tex + off + 4)    = o->pat->list->ent[i] >> 24;
            *(u16 *) ((u8 *) o->tex + off + 0xE)  = h->h[0];
            *(u16 *) ((u8 *) o->tex + off + 0x10) = h->h[1];
            *(u16 *) ((u8 *) o->tex + off + 6)    = h->h[2];
            *(u16 *) ((u8 *) o->tex + off + 8)    = h->h[3];
            *(u16 *) ((u8 *) o->tex + off + 0xA)  = h->h[4];
            *(u16 *) ((u8 *) o->tex + off + 0xC)  = h->h[5];
            DC_FlushAll();
            GX_LoadTex((u8 *) h + 0xC, *(s32 *) ((u8 *) o->tex + off),
                       (s32) (*(u16 *) ((u8 *) o->tex + off + 0xE) * *(u16 *) ((u8 *) o->tex + off + 0x10)) / 2);
            off += 0x14;
            i++;
        } while (i < o->count);
    }
    GX_EndLoadTex();
    SetTexPaletteData(o->pal->b, o->palmap, o->pal->c, 0);
    if (h != NULL) {
        OS_FreeToHeap(0, -1, h);
    }
}
