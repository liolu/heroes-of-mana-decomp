/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 f0 : 1;
    u32 a : 13;
    u32 g : 8;
    u32 b : 4;
    u32 c : 3;
    u32 d : 3;
} W0;
typedef struct {
    u32 w[2];
    u32 pad : 23;
    u32 bit23 : 1;
    u32 rest : 8;
} W8;
typedef struct {
    W0 w0;
    u8 p4[0x2e - 4];
    s16 h2e;
    u8 p30[0x3c - 0x30];
    s32 f3c;
    s32 f40;
    u8 p44[4];
    s32 f48;
    u8 p4c[0x66 - 0x4c];
    s8 s66;
    s8 s67;
    u8 p68[0x70 - 0x68];
    s32 f70;
    u8 p74[0xc4 - 0x74];
    s32 heap;
    u16 hc8;
    u8 pca[0xe8 - 0xca];
    W8 *w8p;
} O;
s32 GetKisekiTable(u32, s32, s32, s32, s32, s32);
void OS_FreeToHeap(s32, s32, s32);
void ObjAZtoAreaAZ(s32 *, s32 *);
extern u8 *data_ov000_02051548;

s32 SetObjGo(O *o) {
    s32 a5;
    s32 a4;
    s32 h;
    s32 t;
    if (o->w0.f0 == 0) {
        return 0;
    }
    if (o->w8p == NULL) {
        return 0;
    }
    if (o->w8p->bit23 != 0) {
        return 0;
    }
    h = o->heap;
    if (h != 0) {
        if (h != 0) {
            OS_FreeToHeap(0, -1, h);
            o->heap = 0;
        }
        o->hc8  = 0;
        o->w0.g = 0;
        o->f3c  = 0;
    }
    a5 = o->f40;
    a4 = o->f48;
    ObjAZtoAreaAZ(&a5, &a4);
    t = GetKisekiTable(o->w0.c, a5, a4, o->s66, o->s67, o->f70);
    if (t == 0) {
        return 0;
    }
    o->w0.g = 5;
    o->f3c  = 3;
    o->h2e  = 1;
    o->heap = t;
    o->hc8  = *(u16 *) (data_ov000_02051548 + 0x2f4);
    return 1;
}
