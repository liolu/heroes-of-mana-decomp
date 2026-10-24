/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Inner {
    u8 pad[4];
    s32 f4;
} Inner;

typedef struct Part {
    u8 pad[0xc];
    Inner *fc;
    u8 pad2[0x54 - 0x10];
    void *f54;
    s32 f58;
    s32 f5c;
    u8 pad3[0x78 - 0x60];
    s32 f78;
} Part;

typedef struct Arm {
    Part *p;
    struct Arm *next;
    void *f8;
} Arm;

void OS_FreeToHeap(s32, s32, void *);
void ReleaseTexBefore(s32);
void CancelTransTex2VramForArm(Part *);

void ReleaseFlyArmOne(Arm *a) {
    Part *p;
    if (a != 0) {
        ReleaseFlyArmOne(a->next);
        p = a->p;
        if (p->fc->f4 != 0 && p->f54 != 0) {
            OS_FreeToHeap(0, -1, p->f54);
            p->f54 = 0;
        }
        ReleaseTexBefore(p->f58);
        ReleaseTexBefore(p->f5c);
        CancelTransTex2VramForArm(p);
        p->f78 = 0;
        if (a->f8 != 0) {
            OS_FreeToHeap(0, -1, a->f8);
            a->f8 = 0;
        }
        if (a->p != 0) {
            OS_FreeToHeap(0, -1, a->p);
            a->p = 0;
        }
        if (a != 0) {
            OS_FreeToHeap(0, -1, a);
        }
    }
}
