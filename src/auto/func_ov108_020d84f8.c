#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    u16 a;
    u16 b;
} Stat;
typedef struct {
    u8 pad[0xA8];
    u16 raw;
    u8 pad2[0x3E];
    Stat *st;
} Ship;
typedef struct {
    u8 pad[0x28];
    u8 *p;
} G1;
typedef struct {
    u8 pad[0x8C];
    u32 flags;
} Glob;

s32 func_0202d478(s32, u16);
s32 GetNowUnitKazu(void *);
void changeOccWithKihon(s32, void *, s32, s32);
s32 GetHookAooNo(void *, s32, s32, s32);
void researchHookObj(void *);
s32 checkHookStatus(s32);
extern G1 *data_0203673c;
extern Glob *data_ov000_02051548;

void func_ov108_020d84f8(Ship *arg0) {
    s32 v;
    u8 *g;

    g = data_0203673c->p;
    if (((u32) (arg0->raw << 0x10) >> 0x1E) != 2) {
        return;
    }
    if (func_0202d478(arg0->st->a * 0x64, arg0->st->b) >= 0x32) {
        return;
    }
    if ((u32) ((u32) (*(s32 *) (g + 0x4E0) * 0x10) >> 0x12) <= 2U) {
        data_ov000_02051548->flags = data_ov000_02051548->flags | 4;
        return;
    }
    if (GetNowUnitKazu(g + 0x2D0) < 5) {
        return;
    }
    researchHookObj(arg0);
    v = GetHookAooNo(arg0, 0, 0, 1);
    if ((v == -1) || (checkHookStatus(v) != -1)) {
        v = GetHookAooNo(arg0, 0, 0, 2);
    }
    if ((v == -1) || (checkHookStatus(v) != -1)) {
        v = GetHookAooNo(arg0, 0, 0, 3);
    }
    if ((v == -1) || (checkHookStatus(v) != -1)) {
        v = GetHookAooNo(arg0, 0, 1, 1);
    }
    if (v == -1) {
        return;
    }
    if (checkHookStatus(v) != -1) {
        return;
    }
    changeOccWithKihon(2, arg0, v, 0);
}
