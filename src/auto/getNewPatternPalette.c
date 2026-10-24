/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Pal {
    u16 id;
    u16 cnt : 14;
    u16 mode : 2;
    void *d4;
    u32 d8;
    struct Pal *next;
} Pal;
typedef struct Q {
    s32 a;
    s32 b;
    s32 c;
} Q;
typedef struct G {
    u8 p[0x244];
    Pal *head;
} G;
extern G *data_ov000_02051548;
Pal *SearchObjPal(u32, u32);
void *func_0200ed38(u32, s32, s32);
void MIi_CpuClear16(s16, void *, s32);
void *ReadAnaFile(s32, Q *, u32 *);

Pal *getNewPatternPalette(u32 id, u32 mode) {
    Pal *p;
    u32 size;
    Q q;
    p = SearchObjPal(id, mode);
    if (p == 0) {
        p = func_0200ed38(0, -1, 0x10);
        MIi_CpuClear16(0, p, 0x10);
        p->id   = id;
        p->cnt  = 1;
        p->mode = (u16) mode;
        q.b     = 0;
        switch (mode) {
            case 0:
                q.a = 3;
                break;
            case 1:
                q.a = 10;
                break;
            case 3:
                q.a = 3;
                q.b = 4;
                break;
            case 2:
            default:
                q.a = 9;
                break;
        }
        q.c                       = id;
        p->d4                     = ReadAnaFile(3, &q, &size);
        p->d8                     = size;
        p->next                   = data_ov000_02051548->head;
        data_ov000_02051548->head = p;
    } else {
        p->cnt = p->cnt + 1;
    }
    return p;
}
