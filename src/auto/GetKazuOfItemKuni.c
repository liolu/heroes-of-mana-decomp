/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u16 id : 9;
    u16 cnt : 7;
} A;

typedef struct {
    u32 f : 1;
    u32 g : 1;
    u32 id : 9;
    u32 r : 21;
    u32 k : 4;
    u32 r2 : 28;
    u8 p8[4];
    u8 b[3];
    u8 pf[0x25];
} B;

typedef struct {
    u8 p0[0x20];
    u32 lim;
    B *b;
    u8 *a;
} G;

extern G *data_0203673c;

s32 GetKazuOfItemKuni(s32 a0, s32 a1) {
    s32 cnt = 0;
    A *a;
    s32 i = 0;
    s32 j;
    G *g = data_0203673c;
    B *b;
    a = (A *) (g->a + a1 * 0x2D0 + 0x10);
    do {
        if (a->id != 0 && a->id == a0) {
            cnt = a->cnt;
            break;
        }
        i++;
        a++;
    } while (i < 0x100);
    b = g->b;
    for (i = 0; i < 0x58; i++, b++) {
        if (b->f != 0 && (g->lim > b->id || b->id == 0x3C) && b->k == a1) {
            for (j = 0; j < 3; j++) {
                if (a0 == b->b[j]) {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}
