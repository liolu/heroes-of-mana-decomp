/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct W {
    u32 a : 11;
    u32 idx : 8;
    u32 b : 13;
} W;
typedef struct K {
    u32 a : 18;
    u32 kind : 5;
    u32 b : 9;
} K;
typedef struct G {
    u8 pad[0x10];
    u8 *tab;
} G;
typedef struct U {
    u8 pad[0x2c];
    u16 f : 1;
    u16 fr : 15;
    u8 pad2[0xba];
    W *w;
} U;
extern G *data_0203673c;
void is_thereFriendOfHalfHPInSite(U *, u32);
void GetFriendOfHalfHPInSite(U *u) {
    K *k = (K *) (data_0203673c->tab + u->w->idx * 4);
    u32 f;
    if (((K *) ((u8 *) k + 8))->kind == 4) {
        is_thereFriendOfHalfHPInSite(u, u->f ^ 1);
    } else {
        is_thereFriendOfHalfHPInSite(u, u->f);
    }
}
