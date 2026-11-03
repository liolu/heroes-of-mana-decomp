/* near start: 4 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

typedef struct {
    u8 pad[0xA8];
    u16 a : 14;
    u16 kind : 2;
} Ship;
typedef struct {
    u8 pad[0x8C];
    u32 flags;
} Glob;
typedef struct {
    u8 *p;
    u8 pad[0x10C];
} Ent;

void SetDestination(void *, s32, s32);
s32 GetGaiaTrentFromShip(void *);
void changeOccWithKihon(s32, void *, s32, s32);
s32 GetHookAooNo(void *, s32, s32, s32);
void researchHookObj(void *);
s32 checkHookStatus(s32);
extern Glob *data_ov000_02051548;
extern Ent data_ov003_020b0dd8[];

void func_ov107_020df354(Ship *arg0) {
    s32 t;
    s32 v;

    if ((data_ov000_02051548->flags & 2) == 2) {
        SetDestination(arg0, 0x1C, 0x27);
        return;
    }
    if (arg0->kind == 2) {
        t = GetGaiaTrentFromShip(arg0);
        if (t == -1) {
            return;
        }
        if (*(u16 *) (data_ov003_020b0dd8[t].p + 0x10) >= 5) {
            return;
        }
    }
    researchHookObj(arg0);
    GetHookAooNo(arg0, 2, 0, 1);
    v = GetHookAooNo(arg0, 2, 0, 1);
    if ((v == -1) || (checkHookStatus(v) != -1)) {
        v = GetHookAooNo(arg0, 2, 0, 2);
    }
    if ((v == -1) || (checkHookStatus(v) != -1)) {
        v = GetHookAooNo(arg0, 2, 0, 3);
    }
    if ((v == -1) || (checkHookStatus(v) != -1)) {
        v = GetHookAooNo(arg0, 2, 1, 1);
    }
    if (v == -1) {
        return;
    }
    if (checkHookStatus(v) != -1) {
        return;
    }
    changeOccWithKihon(2, arg0, v, 0);
}
