/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    int a, b, c;
} R;
typedef struct {
    u32 flags;
    u8 p0[8];
    struct {
        u8 q[0x10];
        void *anim;
    } *res;
    u8 p1[0x50];
    u16 id;
    u16 sub;
    s16 r1;
    s16 r0;
    s16 r2;
} F;
void getAnimation(void *, int, int, R *);
extern u8 data_ov003_020ab6a4;

void SetFlyAnimation(F *f, int a, int b) {
    R r;
    f->id  = a;
    f->sub = b;
    getAnimation(f->res->anim, f->id, f->sub, &r);
    f->r1 = r.b;
    f->r0 = r.a;
    f->r2 = r.c;
    f->flags &= ~0x200;
    f->flags &= ~0x100;
}
