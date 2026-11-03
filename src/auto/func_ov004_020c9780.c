#include "m2c.h"
typedef struct {
    u8 r, g, b, a;
} C;
typedef struct {
    u16 c : 5;
    u16 d : 5;
    u16 e : 5;
    u16 f : 1;
} T;
extern u16 func_ov004_020c9198(s32, s32);
void func_ov004_020c9780(C *o, s32 a, s32 b) {
    T u;
    T t;
    *(u16 *) &t = func_ov004_020c9198(a, b);
    *(u16 *) &u = *(u16 *) &t;
    o->r        = u.c << 3;
    o->g        = t.d << 3;
    o->b        = t.e << 3;
    o->a        = 0xff;
}
