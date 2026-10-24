#include "m2c.h"

typedef struct {
    u16 pad[0x10 / 2];
    u16 flag;
} Info;

typedef struct {
    Info *info;
    u8 pad[0x110 - 4];
} Unit;

typedef struct {
    u8 pad[0x28];
    u8 *g;
} Glob;

typedef struct {
    u8 pad[0xa8];
    u16 lo : 14;
    u16 mode : 2;
} Obj;

extern Glob *data_0203673c;
extern Unit data_ov003_020b0dd8[];

s32 GetNowUnitKazu(u8 *);
s32 GetAooNoFromCharNo(s32);
void researchHookObj(Obj *);
s32 GetHookAooNo(Obj *, s32, s32, s32);
s32 checkHookStatus(s32);
void changeOccWithKihon(s32, Obj *, s32, s32);

void func_ov107_020df1e0(Obj *o) {
    u8 *g = data_0203673c->g;
    s32 a;
    if (o->mode == 2) {
        if (GetNowUnitKazu(g + 0x2d0) < 5) {
            return;
        }
        if (GetNowUnitKazu(g + 0x2d0) > 0x14) {
            return;
        }
        a = GetAooNoFromCharNo(0x2a);
        if (a != -1 && data_ov003_020b0dd8[a].info->flag != 0) {
            return;
        }
    }
    researchHookObj(o);
    a = GetHookAooNo(o, 2, 1, 1);
    if (a == -1 || checkHookStatus(a) != -1) {
        a = GetHookAooNo(o, 2, 0, 1);
    }
    if (a == -1) {
        return;
    }
    if (checkHookStatus(a) != -1) {
        return;
    }
    changeOccWithKihon(2, o, a, 0);
}
