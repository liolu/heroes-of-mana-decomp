#include "m2c.h"
typedef struct {
    u32 p0 : 11;
    u32 kind : 8;
    u32 p1 : 13;
    u8 pad[0x12];
    u16 idx;
} U;
typedef struct {
    u8 pad[8];
    u32 q0 : 19;
    u32 mode : 3;
    u32 q1 : 10;
    u32 pad2;
    u32 r0 : 18;
    u32 chance : 7;
    u32 r1 : 7;
} E;
typedef struct {
    u8 pad[0xe8];
    U *u;
} O;
typedef struct {
    u8 pad[8];
    E *tab;
} T;
extern T *data_0203673c;
s32 GetUnitType(O *);
s32 HowManyEnemyInSpWaza(O *);
s32 GetRnd(void);
s32 func_ov107_020de210(O *o) {
    s32 f;
    s32 r;
    if (GetUnitType(o) == 1) {
        return 0;
    }
    if (o->u->kind == 7) {
        f = 1;
    } else if (data_0203673c->tab[o->u->idx].mode == 1) {
        f = 1;
    } else {
        f = 0;
    }
    if (f == 0 && HowManyEnemyInSpWaza(o) < 2) {
        r = GetRnd();
        return r % 100 <= 0x28;
    }
    r = GetRnd();
    if ((u32) (r % 60) > data_0203673c->tab[o->u->idx].chance) {
        return 0;
    }
    return 1;
}
