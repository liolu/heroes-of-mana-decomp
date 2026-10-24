/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct A {
    s32 a;
    struct A *next;
    s32 b;
} A;
typedef struct {
    u8 pad[0x250];
    A *list;
} G;
extern G *data_ov000_02051548;
void *func_0200ed38(u32 a, s32 b, s32 c);
void AddFlyArm(s32 a, s32 b) {
    A *n = func_0200ed38(0, -1, 12);
    A **pp;
    A *cur;
    G *g;
    n->next = 0;
    n->a    = a;
    n->b    = b;
    g       = data_ov000_02051548;
    cur     = g->list;
    pp      = &g->list;
    while (cur != 0) {
        pp  = &cur->next;
        cur = cur->next;
    }
    *pp = n;
}
