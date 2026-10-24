/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct A {
    u8 p[0x604];
    u16 v;
} A;
typedef struct B {
    u8 p[0x484];
    void *d;
    u16 *e;
} B;
typedef struct Q {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Q;
typedef struct R {
    u32 p : 8;
    u32 f : 5;
    u32 q : 19;
} R;
extern A *data_ov000_0205154c;
extern B *data_ov000_02051548;
void *ReadFileAndUncomp(s32, Q *, u32 *);
void DC_FlushAll(void);
void GXS_BeginLoadBGExtPltt(void);
void GXS_LoadBGExtPltt(const void *, u32, u32);
void GXS_EndLoadBGExtPltt(void);
void OS_FreeToHeap(u32, s32, void *);
void MIi_CpuCopy16(void *, void *, s32);

void PutOnePlanePicUPlcd(s32 n) {
    u32 s1;
    u32 s0;
    Q q1;
    Q q2;
    void *r;
    data_ov000_0205154c->v = 8;
    *(u32 *) 0x4001000     = (*(u32 *) 0x4001000 & ~0x1f00) | (data_ov000_0205154c->v << 8);
    data_ov000_02051548->d = (void *) 0x6210000;
    data_ov000_02051548->e = (u16 *) 0x5000400;
    q1.a                   = 12;
    q1.b                   = 0;
    q1.c                   = n;
    r                      = ReadFileAndUncomp(3, &q1, &s1);
    DC_FlushAll();
    GXS_BeginLoadBGExtPltt();
    GXS_LoadBGExtPltt(r, 0x4000, 0x200);
    GXS_LoadBGExtPltt(r, 0x6000, 0x200);
    GXS_EndLoadBGExtPltt();
    if (r != 0) {
        OS_FreeToHeap(0, -1, r);
    }
    *data_ov000_02051548->e = 0;
    q2.a                    = 12;
    q2.b                    = 1;
    q2.c                    = n;
    r                       = ReadFileAndUncomp(3, &q2, &s0);
    MIi_CpuCopy16(r, data_ov000_02051548->d, 0x10000);
    if (r != 0) {
        OS_FreeToHeap(0, -1, r);
    }
}
