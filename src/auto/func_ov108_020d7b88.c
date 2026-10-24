#include "m2c.h"

s32 GetUnitType(void *);
s32 CanIUseSPwaza(void *);
s32 GetFriendOfAbnormal(void *);
s32 GetRnd(void);

typedef struct {
    u32 pad0;
    u32 pad4;
    u32 lo3 : 3;
    u32 hi29 : 29;
    u32 lo6 : 6;
    u32 hi26 : 26;
    u32 pad10 : 18;
    u32 v7 : 7;
    u32 pad10b : 7;
} Skill;
typedef struct {
    u32 pad0 : 11;
    u32 kind : 8;
    u32 pad1 : 13;
    u8 pad4[0x16 - 4];
    u16 h16;
} Unit;
typedef struct {
    u8 pad[0xE8];
    Unit *u;
} Obj;
typedef struct {
    u8 pad[8];
    Skill *tbl;
} GG;
extern GG *data_0203673c;

s32 func_ov108_020d7b88(Obj *x) {
    Unit *u;
    u32 kind;
    s32 c;
    s32 r;
    s32 rnd;
    if (GetUnitType(x) == 5 || GetUnitType(x) == 6) {
        return 0;
    }
    if (CanIUseSPwaza(x) == 0) {
        return 0;
    }
    u    = x->u;
    kind = u->kind;
    if (kind == 7) {
        c = 0;
    } else if (data_0203673c->tbl[u->h16].lo3 == 2) {
        c = 1;
    } else {
        c = 0;
    }
    if (c == 1) {
        if (kind == 7) {
            c = 0;
        } else if (data_0203673c->tbl[u->h16].lo6 == 0x15) {
            c = 1;
        } else {
            c = 0;
        }
        if (c == 1) {
            return 0;
        }
        if (kind == 7) {
            r = 0;
        } else if (data_0203673c->tbl[u->h16].lo6 == 0x16) {
            r = 1;
        } else {
            r = 0;
        }
        if (r == 1) {
            if (GetFriendOfAbnormal(x) != -1) {
                r = 1;
            } else {
                r = 0;
            }
            return r;
        }
        return 0;
    }
    rnd = GetRnd();
    if (rnd % 100 <= data_0203673c->tbl[x->u->h16].v7) {
        return 1;
    }
    return 0;
}
