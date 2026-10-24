/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 11;
    u32 kind : 8;
    u32 rest : 13;
} Hd;
typedef struct {
    u8 pad[0xd4];
    u16 a;
    u16 b;
    u8 pad2[0xc];
    u8 *ptr;
    Hd *hd;
} W;
typedef struct {
    u8 pad[8];
    u8 *tbl;
} T;
extern T *data_0203673c;
void SetUseWaza(W *w, u16 a, s32 b) {
    if (w->hd != 0) {
        if (w->hd->kind == 7) {
            b = 0x6e;
        }
    }
    w->a   = a;
    w->b   = b;
    w->ptr = data_0203673c->tbl + 8 + b * 0x14;
}
