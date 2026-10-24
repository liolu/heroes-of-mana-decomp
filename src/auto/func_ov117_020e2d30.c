#include "m2c.h"

typedef struct A {
    u32 on : 1;
    u32 act : 1;
    u32 x : 1;
    u32 id : 9;
    u32 rest : 20;
    u32 w1;
} A;

typedef struct B {
    u16 act : 1;
    u16 on : 1;
    u16 id : 8;
    u16 hi : 6;
} B;

typedef struct H {
    u8 pad[0x2c];
    u8 *tbl;
} H;

extern A data_ov117_020f1a38[100];
extern A data_ov117_020f1718[100];
extern H *data_0203673c;

void func_ov117_020e2d30(u32 key) {
    s32 i;
    A *p;
    s32 off;
    s32 k;
    A *q;
    s32 j;
    p = data_ov117_020f1a38;
    for (i = 0; i < 100; i++, p++) {
        if (p->act) {
            if (key == p->id) {
                p->on = 0;
            }
        }
    }
    q = data_ov117_020f1718;
    for (j = 0; j < 100; j++, q++) {
        if (q->act) {
            if (key == q->id) {
                q->on = 0;
            }
        }
    }
    off = k = 0;
    for (; k < 100; k++, off += 2) {
        B *b = (B *) (data_0203673c->tbl + 0xa00 + off);
        if (b->act) {
            if ((b->hi & 1) == 0 && key == b->id) {
                b->on = 0;
            }
        }
    }
}
