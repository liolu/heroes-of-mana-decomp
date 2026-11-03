/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct E {
    u8 pad[4];
    u32 f4 : 5;
    u32 dead : 1;
    u32 rest : 26;
    u8 pad2[8];
    u16 h10;
    u8 pad3[0x22];
} E;
typedef struct Bd {
    u8 pad[0x264];
    u16 ids[0x25];
    u8 pad2[0x2D0 - 0x264 - 0x4A];
} Bd;
typedef struct G {
    u8 pad[0x24];
    E *e;
    Bd *b;
} G;
extern G *data_0203673c;
s32 GetUnitKazuInBoard(s32 n) {
    s32 i;
    s32 cnt;
    G *g = data_0203673c;
    cnt  = 0;
    for (i = cnt; i < 0x25; i++) {
        u16 id = g->b[n].ids[i];
        if (id != 0xFFFF) {
            E *e = &g->e[id];
            if (e->h10 != 0 && e->dead == 0) {
                cnt++;
            }
        }
    }
    return cnt;
}
