/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 act : 1;
    u32 p0 : 1;
    u32 idx : 9;
    u32 p1 : 21;
    u32 kind : 4;
    u32 b4 : 1;
    u32 f5 : 1;
    u32 st : 2;
    u32 p2 : 24;
    u8 pad[0x1c];
    s32 w24;
    u8 pad2[0x34 - 0x28];
} U;

typedef struct {
    u8 pad[8];
    u32 p0 : 10;
    u32 k : 4;
    u32 p1 : 18;
    u8 pad2[0x20 - 0xc];
} T;

typedef struct {
    u8 pad[4];
    T *tbl;
    u8 pad1[0x24 - 8];
    U *u;
} G;

typedef struct {
    u8 pad[0x10];
    u32 p0 : 28;
    u32 b : 1;
    u32 a : 1;
    u32 c : 2;
} H;

extern G *data_0203673c;
extern H *data_ov000_02051548;

void SetUD_ST_paras(void *, s32);

s32 Make2WaitCondForUnit(s32 kind, s32 k2, s32 *out) {
    s32 i;
    s32 found;
    U *u;
    s32 r;

    found = 0;
    u     = data_0203673c->u;
    i     = 0;
    while (1) {
        if (u->act != 0 && kind == u->kind) {
            if (k2 == data_0203673c->tbl[u->idx].k && u->st == 2 && u->f5 == 1) {
                if (found == 1) {
                    r = 1;
                    break;
                }
                u->st  = 3;
                u->w24 = 0x12c;
                *out   = i;
                found  = 1;
                if (data_ov000_02051548->a != 0 && data_ov000_02051548->b == 0) {
                    SetUD_ST_paras((u8 *) u + 4, 4);
                    SetUD_ST_paras((u8 *) u + 0x24, 4);
                }
            }
        }
        i++;
        u++;
        if (i >= 0x58) {
            r = 0;
            break;
        }
    }
    return r;
}
