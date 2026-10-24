/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct T {
    u8 p0[0xC];
    s32 c;
    s32 d;
    u8 p1[0xA4];
    s32 *b8;
    s32 *bc;
    u8 p2[0xC];
    s32 cc;
    u8 p3[0x40];
    u32 f110;
    u32 f114;
    u8 p4[0x10];
    s32 f128;
} T;
typedef struct Pk {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
} Pk;
void func_01ffdd60(Pk *);

s32 func_ov110_020e1928(T *t, s32 x, s32 y) {
    Pk pk;
    if (t->f114 >= t->f110) {
        return 0;
    }
    pk.a = t->b8[t->f128];
    pk.b = t->bc[t->f128];
    pk.d = y * 2;
    pk.c = x;
    pk.e = t->c;
    pk.f = t->d;
    func_01ffdd60(&pk);
    t->f114 = t->f114 + 1;
    t->f128 = t->f128 + 1;
    if (t->f128 == t->cc) {
        t->f128 = 0;
    }
    return 1;
}
