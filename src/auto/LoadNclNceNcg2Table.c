/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    void *w0;
    void *w4;
    u8 b8[2];
    u8 ba;
    u8 padb;
    void *wc;
} Tb;

typedef struct {
    u8 pad[0x4D8];
    Tb *w4d8;
} Gs;

typedef struct {
    u8 pad0[0x158];
    u32 f158 : 1;
    u32 f158h : 31;
    u8 pad15c[4];
    u8 *p160;
    u8 pad164[0x204];
    u8 pal[0x298];
    u16 h600pad;
    u16 h602;
} Ent;

typedef struct {
    u8 pad[0x600];
    u16 pad600;
    u16 h602;
} Ho;

extern Gs *data_ov000_02051548;
extern u8 *data_ov000_0205154c;
void *func_0200ed38(s32, s32, s32);
void MIi_CpuClear16(s32, void *, s32);
void *ReadAnaFile(s32, void *, s32 *);
void OS_FreeToHeap(s32, s32, void *);
s32 SearchCanUseObjPalNo(s32, s32);
void MIi_CpuCopy16(void *, void *, s32);

Tb *LoadNclNceNcg2Table(void **src, void *val, s32 id, u32 mask) {
    Tb *t;
    s32 sz;
    s32 p;
    s32 k;
    u16 j;
    s32 i;
    s32 off;
    t = func_0200ed38(0, -1, 0x10);
    MIi_CpuClear16(0, t, 0x10);
    t->wc  = (void *) data_ov000_02051548->w4d8;
    t->w0  = ReadAnaFile(id, src, &sz);
    k      = id - 2;
    src[k] = val;
    t->w4  = ReadAnaFile(id, src, &sz);
    t->ba  = sz / 32;
    if (t->w0 == NULL || t->w4 == NULL) {
        if (t->w0 != NULL) {
            OS_FreeToHeap(0, -1, t->w0);
            t->w0 = NULL;
        }
        if (t->w4 != NULL) {
            OS_FreeToHeap(0, -1, t->w4);
            t->w4 = NULL;
        }
        if (t != NULL) {
            OS_FreeToHeap(0, -1, t);
        }
        return NULL;
    }
    t->b8[0] = 0x1F;
    t->b8[1] = 0x1F;
    i        = 0;
    off      = i;
    for (; i < 2; i++, off += 0x4B0) {
        if (mask & (1 << i)) {
            p = SearchCanUseObjPalNo(t->ba, (u16) i);
            for (j = 0; j < t->ba; j++) {
                {
                    u8 *b = (u8 *) (off + (s32) data_ov000_0205154c);
                    *(u16 *) (b + 0x602) |= 1 << (p + j);
                }
            }
            t->b8[i] = p;
            if (((Ent *) (data_ov000_0205154c + off))->f158 == 1) {
                MIi_CpuCopy16(t->w4, ((Ent *) (data_ov000_0205154c + off))->p160 + p * 32, t->ba * 32);
                MIi_CpuCopy16(t->w4, data_ov000_0205154c + 0x368 + off + p * 32, t->ba * 32);
            } else {
                MIi_CpuCopy16(t->w4, data_ov000_0205154c + 0x368 + off + p * 32, t->ba * 32);
            }
        }
    }
    data_ov000_02051548->w4d8 = t;
    return t;
}
