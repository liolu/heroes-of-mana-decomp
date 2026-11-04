/* compiler: 2.0/sp1p5 -profile */
/* near start: 4 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct {
    u32 type : 2;
    u32 a : 10;
    u32 cnt : 8;
    u32 b : 8;
    u32 top : 4;
} Hdr;

typedef struct {
    Hdr hdr;
    s32 pad[4];
    void *p14;
    void *p18;
} Mod;

extern Mod *SearchModelTypeSt(s32, s32);
extern Mod *func_0200ed38(u32, s32, s32);
extern void *ReadAnaFile(s32, s32 *, s32 *, s32);
extern void SetAdrsOfModel(void *);
extern void SetVRamFor3D(void *);
extern u8 *data_ov000_02051548;

void *AddModelTypeSt(s32 a, s32 b, s32 c) {
    Mod *m;
    Mod *n;
    s32 loc[4];

    m = SearchModelTypeSt(a, b);
    if (m != 0) {
        m->hdr.cnt += 1;
        return m->p14;
    }
    n           = func_0200ed38(0, -1, 0x1c);
    n->hdr.type = a;
    n->hdr.a    = b;
    n->hdr.cnt  = 1;
    n->hdr.b    = c;
    switch (a) {
        case 1:
            loc[1] = 2;
            break;
        case 0:
        default:
            loc[1] = 1;
            break;
    }
    loc[2]                                         = 2;
    loc[3]                                         = b;
    n->p14                                         = ReadAnaFile(3, &loc[1], &loc[0], loc[2]);
    n->p18                                         = *(void **) ((u8 *) data_ov000_02051548 + 0x2d0);
    *(Mod **) ((u8 *) data_ov000_02051548 + 0x2d0) = n;
    SetAdrsOfModel(n->p14);
    SetVRamFor3D(n);
    return n->p14;
}
