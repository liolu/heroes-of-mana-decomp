/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void objZahyou2ScreenZahyou(s32 *);
void AddPutOrder(void *);

typedef struct O {
    u8 pad0[4];
    u32 f0 : 9;
    u32 fb : 1;
    u32 f1 : 22;
    u8 pad1[0x38];
    s32 x;
    s32 y;
    s32 z;
    s32 h;
    u8 pad2[0x24];
    s16 sx;
    s16 sy;
    s32 sz;
} O;

void SetGXGYforModel(O *o) {
    s32 v[3];
    v[0] = o->x;
    v[1] = o->y + o->h;
    v[2] = o->z;
    objZahyou2ScreenZahyou(v);
    if (!o->fb) {
        o->sx = v[0];
        o->sy = v[1];
        o->sz = v[2];
        if (o->sz >= 0) {
            AddPutOrder(o);
        }
    }
}
