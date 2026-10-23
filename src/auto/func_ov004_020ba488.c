#include "m2c.h"
typedef struct {
    void *data;
    u32 off;
    u32 size;
} Ent;
typedef struct {
    u8 pad[4];
    u8 v4;
    u8 pad5[0x10 - 5];
    s32 texCnt;
    Ent *tex;
    u8 pad18[0x2c - 0x18];
    s32 pltCnt;
    Ent *plt;
} Obj;
void GX_BeginLoadTex(void);
void GX_EndLoadTex(void);
void func_0200fb08(void);
void DC_FlushRange(void *, u32);
void GX_LoadTex(void *, u32, u32);
void GX_BeginLoadTexPltt(void);
void GX_EndLoadTexPltt(void);
void GX_LoadTexPltt(void *, u32, u32);
void func_ov004_020ba5d4(Obj *, s32);
void func_ov004_020ba634(Obj *);
void func_ov004_020ba488(Obj *o) {
    s32 i;
    s32 j;
    s32 v;
    Ent *e;
    Ent *p;
    if (o->v4 == 0) {
        o->texCnt = 0;
        o->pltCnt = 0;
        return;
    }
    GX_BeginLoadTex();
    for (i = 0; i < o->texCnt; i++) {
        if (o->tex[i].off < 0xf0000000) {
            v = *(volatile u16 *) 0x4000006;
            if (v > 0xd5) {
                GX_EndLoadTex();
                func_0200fb08();
                GX_BeginLoadTex();
            }
            p = o->tex;
            e = &p[i];
            DC_FlushRange(p[i].data, e->size);
            GX_LoadTex(p[i].data, e->off, e->size);
        }
    }
    GX_EndLoadTex();
    o->texCnt = 0;
    GX_BeginLoadTexPltt();
    for (j = 0; j < o->pltCnt; j++) {
        if (o->plt[j].off < 0xf0000000) {
            v = *(volatile u16 *) 0x4000006;
            if (v > 0xd5) {
                GX_EndLoadTexPltt();
                func_0200fb08();
                GX_BeginLoadTexPltt();
            }
            p = o->plt;
            e = &p[j];
            DC_FlushRange(p[j].data, e->size);
            GX_LoadTexPltt(p[j].data, e->off, e->size);
        }
    }
    GX_EndLoadTexPltt();
    o->pltCnt = 0;
    func_ov004_020ba5d4(o, 0);
    func_ov004_020ba634(o);
}
