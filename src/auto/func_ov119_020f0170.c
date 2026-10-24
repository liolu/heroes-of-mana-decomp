#include "m2c.h"

typedef struct {
    u32 kind : 8;
    u32 idx : 8;
    u32 f16 : 3;
    u32 rest : 13;
    s16 a;
    s16 b;
    u8 pad[0x18 - 8];
} Slot;

typedef struct {
    u8 pad0[0x20];
    Slot s[8];
    u8 pad1[0xf0 - 0xe0];
    s32 sel;
    u8 pad2[0x4f8 - 0xf4];
    u16 cnt;
    u16 pad3;
} Blk;

typedef struct {
    u8 pad[4];
    Blk *blks;
} Tbl;

s16 func_ov119_020ede90(s32, s32);
s16 func_ov119_020edf40(s32);
u8 func_ov119_020edf78(s32);
extern Tbl data_ov119_020f2750;
extern Blk *data_ov119_020f2f68;

void func_ov119_020f0170(void) {
    s32 r4;
    s16 r3;
    s32 i;
    Blk *b;
    Slot *p;
    r4 = func_ov119_020edf40(1);
    r3 = func_ov119_020edf40(3);
    b  = &data_ov119_020f2750.blks[r4];
    p  = b->s;
    i  = 0;
    do {
        if (p->kind == 0xF) {
            b->s[i].a                                            = func_ov119_020ede90(r4, r3);
            b->s[i].kind                                         = func_ov119_020edf78(5);
            b->s[i].b                                            = r4;
            data_ov119_020f2f68->s[data_ov119_020f2f68->sel].idx = i;
            data_ov119_020f2f68->s[data_ov119_020f2f68->sel].f16 = 0;
            data_ov119_020f2f68->cnt += 7;
            return;
        }
        i++;
        p++;
    } while (i < 8);
}
