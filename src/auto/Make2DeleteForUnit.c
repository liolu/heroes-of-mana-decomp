/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 w;
    u32 w2 : 25;
    u32 f : 5;
    u32 r : 2;
} X;
typedef struct {
    u32 flag : 1;
    u32 pad : 1;
    u32 idx : 9;
    u32 rest : 21;
    u32 owner : 4;
    u32 pad1 : 1;
    u32 b5 : 1;
    u32 b67 : 2;
    u32 rest1 : 24;
    u32 pad2 : 25;
    u32 f : 5;
    u32 rest2 : 2;
    u8 p[0x28];
} E;
typedef struct {
    u32 pad : 10;
    u32 v : 4;
    u32 rest : 18;
} UW;
typedef struct {
    u8 pad[8];
    UW w;
    u8 pad2[0x14];
} U;
typedef struct {
    u8 pad[4];
    U *p4;
    u8 pad2[0x1C];
    E *p24;
} G;
typedef struct {
    u8 pad[0x10];
    u32 pad0 : 28;
    u32 b28 : 1;
    u32 b29 : 1;
    u32 r : 2;
} H;
extern G *data_0203673c;
extern H *data_ov000_02051548;
void SetTrsObjCommand(s32, s32, s32, s32);
void func_02002304(s32, s32);
void checkUnitKazuInShip(s32);
void Make2DeleteForUnit(s32 a, s32 b) {
    s32 i;
    E *e = data_0203673c->p24;
    s32 off;
    i   = 0;
    off = i;
    for (; i < 88; i++, off += 0x34, e++) {
        if (e->flag != 0 && e->owner == a && data_0203673c->p4[e->idx].w.v == b && e->b67 == 2 && e->b5 == 1) {
            if (data_ov000_02051548->b29 != 0 && data_ov000_02051548->b28 != 0) {
                SetTrsObjCommand(5, a, i, 0);
            }
            if (data_ov000_02051548->b29 != 0 && data_ov000_02051548->b28 == 0) {
                ((E *) ((u8 *) data_0203673c->p24 + off))->f = 15;
            }
            func_02002304(a, i);
        }
    }
    checkUnitKazuInShip(a);
}
