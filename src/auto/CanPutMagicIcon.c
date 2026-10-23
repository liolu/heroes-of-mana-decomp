/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 x : 2;
    u32 id : 9;
    u32 idx2 : 8;
    u32 rest : 13;
    u8 pad[0x12];
    u16 h16;
} B;

typedef struct {
    u32 pad : 14;
    u32 kind : 8;
    u32 rest : 10;
    u8 pad2[0x14];
    u16 h18;
    u8 pad3[0xe8 - 0x1a];
    B *b;
} A;

typedef struct {
    u8 pad[8];
    u32 p : 10;
    u32 type : 4;
    u32 rest : 18;
    u8 pad2[0x14];
} E;

typedef struct {
    u32 p : 17;
    u32 flag : 1;
    u32 rest : 14;
} W;

typedef struct {
    u8 pad[8];
    W arr[1];
} Q;

typedef struct {
    u8 pad[4];
    E *e;
    u8 pad2[8];
    Q *q;
} G;

extern G *data_0203673c;
extern u8 data_ov003_020ab07c[];

s32 CanPutMagicIcon(A *a) {
    B *b = a->b;
    G *g = data_0203673c;
    if (g->e[b->id].type == 5 && b->h16 != 0 && a->h18 == 0 && data_ov003_020ab07c[b->idx2] == 0 &&
        g->q->arr[b->idx2].flag == 0 && a->kind != 0x10 && a->kind != 0xf) {
        return 1;
    }
    return 0;
}
