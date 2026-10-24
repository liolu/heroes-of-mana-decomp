#include "m2c.h"

typedef struct Obj {
    u8 pad[0xA8];
    u16 lo : 14;
    u16 kind : 2;
} Obj;

typedef struct Inner {
    u8 pad[0x10];
    u16 lvl;
} Inner;

typedef struct Row {
    Inner *p;
    u8 pad[0x10C];
} Row;

extern Row data_ov003_020b0dd8[];
s32 GetGaiaTrentFromShip(Obj *);
void ReOrderOrderUnit(Obj *);
void researchHookObj(Obj *);
s32 GetHookAooNo(Obj *, s32, s32, s32);
s32 checkHookStatus(s32);
void changeOccWithKihon(s32, Obj *, s32, s32);

void func_ov107_020dca98(Obj *arg0) {
    s32 t;
    s32 r;
    if (arg0->kind == 2) {
        t = GetGaiaTrentFromShip(arg0);
        if (t == -1) {
            return;
        }
        if (data_ov003_020b0dd8[t].p->lvl >= 5) {
            ReOrderOrderUnit(arg0);
            return;
        }
    }
    researchHookObj(arg0);
    r = GetHookAooNo(arg0, 0, 0, 1);
    if (r == -1 || checkHookStatus(r) != -1) {
        r = GetHookAooNo(arg0, 0, 0, 2);
    }
    if (r == -1) {
        return;
    }
    if (checkHookStatus(r) != -1) {
        return;
    }
    changeOccWithKihon(2, arg0, r, 0);
}
