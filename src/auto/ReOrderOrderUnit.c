/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Ship {
    u8 pad[0xA8];
    u16 lo : 7;
    u16 mid : 7;
    u16 kind : 2;
} Ship;
typedef struct A {
    u32 w0;
    u32 pad1 : 16;
    u32 flag : 3;
    u32 rest : 13;
} A;
typedef struct B {
    u32 pad0 : 10;
    u32 type : 4;
    u32 rest : 18;
} B;
typedef struct Unit {
    u8 pad0[8];
    u32 pad8 : 23;
    u32 shipNo : 4;
    u32 rest8 : 5;
    u8 pad1[0xCC - 0xC];
    u32 c;
    u32 d;
    u8 pad2[0xE8 - 0xD4];
    A *a;
    B *b;
} Unit;
typedef struct Ent {
    u8 pad[0x10];
    u16 v;
} Ent;
typedef struct Row {
    Ent *e;
    u8 pad[0x110 - 4];
} Row;

s32 CheckObjIsResource(s32);
Ship *GetShipAooSt(u32);
s32 GetUnitNoFromConsider(Unit *, void *);
void MIi_CpuCopy16(void *, void *, s32);
void changeOccasion(s32, void *, Unit *, s32, s32);
void objSetDistance(Unit *, u32, u32);
extern Row data_ov003_020b0dd8[];

void ReOrderOrderUnit(Unit *u) {
    MIi_CpuCopy16(&u->d, &u->c, 4);
    if (u->a != NULL && u->b != NULL && u->b->type == 7) {
        if (u->a->flag != 0) {
            Ship *s = GetShipAooSt(u->shipNo);
            if (s != NULL) {
                if (s->kind == 2) {
                    objSetDistance(u, s->lo, s->mid);
                }
            }
        } else {
            s32 n = GetUnitNoFromConsider(u, &u->c);
            if (n < 0 || CheckObjIsResource(n) != 1 || data_ov003_020b0dd8[n].e->v != 0) {
                changeOccasion(4, &u->c, u, 0, 0);
            }
        }
    } else {
        changeOccasion(4, &u->c, u, 0, 0);
    }
}
