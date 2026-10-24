#include "m2c.h"

typedef struct {
    u32 f0 : 1;
    u32 p : 7;
    u32 id : 8;
    u32 rest : 16;
} W;

typedef struct {
    W w[0x351];
    u32 cur;
    u32 pad;
    s32 z;
} TblA;

typedef struct {
    u32 a : 2;
    u32 idx : 9;
    u32 b : 21;
} Rec;

typedef struct {
    u32 a : 1;
    u32 idx : 9;
    u32 b : 22;
    u8 pad[0x1c];
} Rec2;

typedef struct {
    u8 pad[4];
    u8 *r;
    u8 pad2[0x1c];
    u8 *t;
} Game;

typedef struct {
    u8 pad[0x80];
    u16 sel;
} Sel;

typedef struct {
    u8 pad[0x488];
    u32 flags;
} Fl;

extern Game *data_0203673c;
extern u8 *data_ov112_020ec580;
extern Fl data_ov112_020ec588;
extern Sel data_ov112_020ec988;
extern TblA data_ov112_020eca1c;
extern W data_ov112_020ed22c[];
s32 func_ov112_020e1ce8(u32);

void func_ov112_020e9094(s32 n) {
    s32 i;
    W *p;
    Rec2 *base;
    u32 k;
    if (data_ov112_020eca1c.cur == data_ov112_020eca1c.w[n].id) {
        data_ov112_020eca1c.cur = 0;
    } else {
        data_ov112_020eca1c.cur = data_ov112_020eca1c.w[n].id;
        data_ov112_020eca1c.z   = 0;
    }
    data_ov112_020eca1c.w[n].f0 = 0;
    i                           = 0;
    p                           = data_ov112_020ed22c;
    base                        = (Rec2 *) (data_0203673c->r + 8);
    k                           = ((Rec *) (data_0203673c->t + data_ov112_020ec988.sel * 0x34))->idx;
    do {
        if (p->id == data_ov112_020eca1c.w[n].id) {
            p->f0                                                                                = 0;
            *(u8 *) (i + (func_ov112_020e1ce8(base[k].idx) * 0x108 + (s32) data_ov112_020ec580)) = 0;
        }
        i++;
        p++;
    } while (i < 0x102);
    data_ov112_020ec588.flags |= 6;
}
