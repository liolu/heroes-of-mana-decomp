/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 11;
    u32 idx : 8;
    u32 rest : 13;
} I;
typedef struct {
    u32 w0;
    u32 type : 6;
    u32 rest : 26;
} J;
typedef struct {
    u32 w0;
    u32 w4;
    u32 a : 23;
    u32 f : 4;
    u32 b : 5;
    u8 pad[0x20];
    u16 side : 1;
    u16 rest : 15;
    u8 pad1[0xb6];
    J *j;
    I *ip;
    u8 pad2[0x24];
} O;
typedef struct {
    u32 w0;
    u32 w4;
    u32 a : 18;
    u32 kind : 5;
    u32 b : 9;
} T;
typedef struct {
    u8 p[0x10];
    u8 *tab;
} G;
typedef struct {
    u8 p[0x38];
    u8 b38;
} Ship;
extern O data_ov003_020b0cf0[];
extern G *data_0203673c;
extern s32 checkHookStatus(s32);
extern Ship *GetShipAooSt(void);

s32 IsItEnemy(O *o, s32 idx) {
    u32 k;
    s32 v;
    if (idx == -1) {
        return 0;
    }
    k = data_ov003_020b0cf0[idx].f;
    if (k > 4) {
        return 0;
    }
    if (k == 4) {
        Ship *s;
        if (checkHookStatus(idx) == -1) {
            return 0;
        }
        s = GetShipAooSt();
        if (s == 0) {
            return 0;
        }
        if (((u32) (*(u16 *) ((u8 *) s + 0xa8) << 16) >> 30) != 2) {
            return 0;
        }
        idx = s->b38;
    }
    if (o->ip == 0) {
        return 0;
    }
    if (((T *) (data_0203673c->tab + o->ip->idx * 4))->kind == 4) {
        v = data_ov003_020b0cf0[idx].side;
    } else {
        v = data_ov003_020b0cf0[idx].side ^ 1;
    }
    if (o->j != 0) {
        if ((u32) (o->j->type - 0x15) <= 1) {
            v ^= 1;
        }
    }
    return v == o->side;
}
