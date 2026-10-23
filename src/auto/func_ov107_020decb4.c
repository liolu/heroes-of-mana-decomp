#include "m2c.h"

typedef struct Sub {
    u8 pad[0x10];
    u16 a;
    u16 b;
} Sub;
typedef struct Unit {
    u8 pad[0xA8];
    u16 lo : 14;
    u16 kind : 2;
    u8 pad2[0xE8 - 0xAA];
    Sub *sub;
} Unit;
typedef struct Ent {
    u8 pad[0x10];
    u16 v;
} Ent;
typedef struct Row {
    Ent *e;
    u8 pad[0x110 - 4];
} Row;

s32 func_0202d478(s32, s32);
void ReOrderOrderUnit(Unit *);
s32 GetGaiaTrentFromShip(Unit *);
void researchHookObj(Unit *);
s32 GetHookAooNo(Unit *, s32, s32, s32);
s32 checkHookStatus(s32);
void changeOccWithKihon(s32, Unit *, s32, s32);
extern Row data_ov003_020b0dd8[];

void func_ov107_020decb4(Unit *u) {
    s32 r;
    if (u->kind == 2) {
        if (func_0202d478(u->sub->a * 100, u->sub->b) >= 0x32) {
            ReOrderOrderUnit(u);
            return;
        }
        r = GetGaiaTrentFromShip(u);
        if (r == -1) {
            return;
        }
        if (data_ov003_020b0dd8[r].e->v >= 5) {
            ReOrderOrderUnit(u);
            return;
        }
    }
    researchHookObj(u);
    r = GetHookAooNo(u, 0, 0, 1);
    if (r == -1 || checkHookStatus(r) != -1) {
        r = GetHookAooNo(u, 0, 0, 2);
    }
    if (r == -1 || checkHookStatus(r) != -1) {
        r = GetHookAooNo(u, 0, 0, 3);
    }
    if (r == -1) {
        return;
    }
    if (checkHookStatus(r) != -1) {
        return;
    }
    changeOccWithKihon(2, u, r, 0);
}
