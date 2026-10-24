#include "m2c.h"
typedef struct {
    u8 pad[8];
    s32 a;
    u8 pad2[0x28];
    void (*fn)(s32, s32, s32, s32, s32);
    s32 b;
} Vt;
typedef struct {
    Vt *vt;
    s32 size;
    s32 x;
    s32 src;
    s32 dst;
} Msg;
extern u8 data_02037170[];
extern s32 func_0200e3ec(void *, void **, s32);
extern void DC_InvalidateRange(s32, s32);
void func_02004a80(void) {
    Msg *m[2];
    Msg *p;
    while (1) {
        func_0200e3ec(data_02037170, (void **) m, 1);
        p = m[0];
        if (p == 0) {
            return;
        }
        DC_InvalidateRange(p->src, p->size);
        DC_InvalidateRange(p->dst, p->size);
        p->vt->fn(p->src, p->dst, p->size, p->vt->a, p->vt->b);
    }
}
